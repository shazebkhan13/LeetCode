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
        ListNode *ans=new ListNode(-101),*temp=ans,*cur=head;
        while(cur && cur->next){
              if(cur->val==cur->next->val){
                int x=cur->val;
                while(cur && cur->val==x) cur=cur->next;
              }
              else{
                temp->next=new ListNode(cur->val);
                temp=temp->next;
                cur=cur->next;
              }
        }
        if(cur && cur->val!=temp->val) temp->next=new ListNode(cur->val);
        return ans->next;
    }
};