/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    if(!head || !head->next) return head;
    struct ListNode *pre=head,*cur=head->next;
    while(cur){
        if(cur->val==pre->val){
            struct ListNode* temp=cur;
            cur=cur->next;
            free(temp);
        }
        else{
            pre->next=cur;
            pre=pre->next;
            cur=cur->next;
        }
    }
    pre->next=NULL;
    return head;
}