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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode *first=new ListNode(),*second=head;
        first->next=head;
        head=first;
        left--;
        while(--right){
            left--;
            if(left==0) first=second;
            second=second->next;
        }
        ListNode *start=first->next,*end=second;
        second=second->next;
        end->next=NULL;
        first->next=reverseList(start,NULL);
        start->next=second;
        first=head;
        head=head->next;
        delete first;
        return head;
    }
};