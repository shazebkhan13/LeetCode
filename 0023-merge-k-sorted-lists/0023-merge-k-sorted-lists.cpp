/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    void merge(vector<ListNode*>& arr,int start,int mid){
        ListNode *head=new ListNode(0),*cur=head,*first=arr[start],*second=arr[mid+1];
        while(first && second){
            if(first->val<second->val){
                cur->next=first;
                first=first->next;
            }
            else{
                cur->next=second;
                second=second->next;
            }
            cur=cur->next;
        }
        cur->next=first?first:second;
        arr[start]=head->next;
        delete head;
    }
    void mergeSort(vector<ListNode*>& arr,int start,int end){
        if(start==end) return;
        int mid=start+(end-start)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid);
    }
    ListNode* mergeKLists(vector<ListNode*>& arr) {
        int n=arr.size();
        if(n==0) return NULL;
        mergeSort(arr,0,n-1);
        return arr[0];
    }
};