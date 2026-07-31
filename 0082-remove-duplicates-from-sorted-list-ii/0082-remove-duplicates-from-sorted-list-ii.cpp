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
        ListNode *ans=new ListNode(0,head),*temp=ans,*cur=head;
        while(cur){
              if(cur->next && cur->val==cur->next->val){
                while(cur->next && cur->val==cur->next->val) cur=cur->next;
                temp->next=cur->next;
              }
              else temp=temp->next;
              cur=cur->next;
        }
        return ans->next;
    }
};