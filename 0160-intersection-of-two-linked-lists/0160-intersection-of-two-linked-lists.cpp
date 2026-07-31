/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode *cur,ListNode *pre){
        while(cur){
            ListNode *temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
    int countNode(ListNode* cur){
        int x=0;
        while(cur){
            x++;
            cur=cur->next;
        }
        return x;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tailA=headA,*tailB=headB;
        while(tailA->next) tailA=tailA->next;
        while(tailB->next) tailB=tailB->next;
        if(tailA!=tailB) return NULL;
        int total=countNode(headA)+countNode(headB);
        headA=reverseList(headA,NULL);
        int cnt=countNode(headB);
        cnt=(total-cnt+1)/2;
        ListNode *cur=headA;
        while(--cnt) cur=cur->next;
        headA=reverseList(headA,NULL);
        return cur;
    }
};