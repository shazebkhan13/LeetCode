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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head || !head->next) return head;
        int size=0;
        ListNode *temp=head;
        while(temp){
            size++;
            temp=temp->next;
        }
        k=size-k%size;
        if(k==size) return head;
        temp=head;
        while(--k) temp=temp->next;
        ListNode *p=temp->next;
        temp->next=NULL;
        temp=p;
        while(temp->next) temp=temp->next;
        temp->next=head;
        head=p;
        return head;
    }
};