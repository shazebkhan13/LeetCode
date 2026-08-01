/**
 * Definition for singly-linked list.
 * struct ListListNode {
 *     int val;
 *     ListListNode *next;
 *     ListListNode() : val(0), next(nullptr) {}
 *     ListListNode(int x) : val(x), next(nullptr) {}
 *     ListListNode(int x, ListListNode *next) : val(x), next(next) {}
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *newHead=new ListNode(0),*pre=newHead,*start=head,*cur=head;
        while(cur){
            int x=k;
            while(cur && --x) cur=cur->next;
            if(x){
                pre->next=start;
                return newHead->next;
            }
            ListNode *temp=cur;
            cur=cur->next;
            temp->next=NULL;
            pre->next=reverseList(start,NULL);
            pre=start;
            start=cur;
        }
        return newHead->next;
    }
};