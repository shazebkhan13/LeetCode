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
        int d=size/k,r=size%k;
        cur=head;
        ListNode *pre=NULL;
        int t=0,i=0;
        if(d==0){
            while(cur){
                arr[i]=cur;
                cur=cur->next;
                arr[i]->next=NULL;
                i++;
            }
            return arr;
        }
        while(cur){
            if(t==0){
                if(pre) pre->next=NULL;
                arr[i++]=cur;
            }
           t++;
           if(t==d){
            if(r){
                cur=cur->next;
                r--;
            }
            t=0;
           }
           pre=cur;
          if(cur) cur=cur->next;
        }
        return arr;
    }
};