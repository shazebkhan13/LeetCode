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
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode *odd=new ListNode(),*first=odd,*even=new ListNode(),*second=even,*cur=head;
        while(cur){
            first->next=cur;
            first=first->next;
            cur=cur->next;
            second->next=cur;
            second=second->next;
            if(cur) cur=cur->next;
        }
        first->next=even->next;
        return odd->next;
    }
};