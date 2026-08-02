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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *cur=list1,*first,*second;
        while(b--){
            a--;
            if(a==0) first=cur;
            cur=cur->next;
        }
        second=cur->next;
        first->next=list2;
        while(first->next) first=first->next;
        first->next=second;
        return list1;
    }
};