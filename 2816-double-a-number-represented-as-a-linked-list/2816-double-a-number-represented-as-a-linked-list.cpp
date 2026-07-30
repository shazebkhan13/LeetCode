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
    ListNode* reverseList(ListNode *head){
        ListNode *cur=head,*pre=NULL;
        while(cur){
            ListNode *temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
    ListNode* doubleIt(ListNode* head) {
        head=reverseList(head);
        ListNode *cur=head,*pre=NULL;
        int c=0;
        while(cur){
            int d=cur->val;
            d=d*2+c;
            c=d/10;
            cur->val=d%10;
            pre=cur;
            cur=cur->next;
        }
        while(c){
            pre->next=new ListNode(c%10);
            pre=pre->next;
            c/=10;
        }
        return reverseList(head);
    }
};