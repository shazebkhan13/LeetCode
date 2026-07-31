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
    ListNode* partition(ListNode* head, int x) {
        ListNode *ans=new ListNode(),*cur=head,*temp=ans;
        while(cur){
            if(cur->val<x){
                temp->next=new ListNode(cur->val);
                temp=temp->next;
            }
            cur=cur->next;
        }
        cur=head;
        while(cur){
            if(cur->val>=x){
                temp->next=new ListNode(cur->val);
                temp=temp->next;
            }
            cur=cur->next;
        }
        cur=ans;
        ans=ans->next;
        delete cur;
        return ans;
    }
};