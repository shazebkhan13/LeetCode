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
    ListNode* merge(ListNode *first,ListNode *second){
        ListNode *newHead=new ListNode(),*cur=newHead;
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
        cur=newHead;
        newHead=newHead->next;
        delete cur;
        return newHead;
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *temp=NULL,*slow=head,*fast=head;
        while(fast && fast->next){
            temp=slow;
            slow=slow->next;
            fast=fast->next->next;
        }
        temp->next=NULL;
        ListNode *l1=sortList(head);
        ListNode *l2=sortList(slow);
        head=merge(l1,l2);
        return head;
    }
};