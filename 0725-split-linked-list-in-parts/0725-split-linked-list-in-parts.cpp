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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*> arr(k,NULL);
        if(!head) return arr;
        int size=0;
        ListNode *cur=head;
        while(cur){
            size++;
            cur=cur->next;
        }
        int d=size/k,r=size%k,i=0;
        cur=head;
        ListNode *pre=NULL;
        while(cur){
            arr[i++]=cur;
            int x=d;
            if(r) x++,r--;
            while(x--){
                pre=cur;
                cur=cur->next;
            }
            pre->next=NULL;
        }
        return arr;
    }
};