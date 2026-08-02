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
    ListNode* swapPairs(ListNode* head) {
        if(!head || !head->next) return head;
        ListNode *newHead=new ListNode(),*pre=newHead,*first=head,*second=head->next,*temp;
        while(second){
            temp=second->next;
            pre->next=second;
            second->next=first;
            first->next=temp;
            pre=first;
            first=first->next;
            second=first?first->next:NULL;
        }
        return newHead->next;
    }
};