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
    ListNode* mergeNodes(ListNode* head) {
        ListNode*cur=head->next,*temp=head,*pre=NULL;
        int d=0;
        while(cur){
            if(cur->val){
                d+=cur->val;
            }
            else{
                temp->val=d;
                pre=temp;
                temp=temp->next;
                d=0;
            }
            cur=cur->next;
        }
        pre->next=NULL;
        return head;
    }
};