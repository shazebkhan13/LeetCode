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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *pre=head,*cur=head->next;
        while(cur){
            if(cur->val==pre->val){
                ListNode* temp=cur;
                cur=cur->next;
                delete temp;
            }
            else{
                pre->next=cur;
                pre=pre->next;
                cur=cur->next;
            }
        }
        pre->next=NULL;
        return head;
    }
};