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
    ListNode* reverseList(ListNode *cur,ListNode *pre){
        if(!cur) return pre;
        ListNode *temp=cur->next;
        cur->next=pre;
        return reverseList(temp,cur);
    }
    void reorderList(ListNode* head) {
        if(!head->next || !head->next->next) return;
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        fast=reverseList(slow->next,NULL);
        slow->next=NULL;
        slow=head;
        ListNode *newHead=new ListNode(),*cur=newHead;
        while(fast){
            cur->next=slow;
            cur=cur->next;
            slow=slow->next;
            cur->next=fast;
            cur=cur->next;
            fast=fast->next;
        }
        if(slow) cur->next=slow;
        head=newHead->next;
        delete newHead;
    }
};