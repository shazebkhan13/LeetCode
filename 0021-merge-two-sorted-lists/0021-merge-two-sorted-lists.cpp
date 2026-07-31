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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode *head=new ListNode(),*cur=head,*first=list1,*second=list2;
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
        return head->next;
    }
};