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
    ListNode* middleNode(ListNode* head) {
        if(head->next==NULL) return head;
        ListNode *first=head,*second=head->next;
        while(second && second->next && second->next->next){
            first=first->next;
            second=second->next->next;
        }
        return first->next;
    }
};