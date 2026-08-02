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
    void merge(ListNode *start,ListNode *slow,ListNode *end,vector<int>& temp){
        ListNode *first=start,*second=slow;
        while(first!=slow && second!=end){
            if(first->val<second->val){
                temp.push_back(first->val);
                first=first->next;
            }
            else{
                temp.push_back(second->val);
                second=second->next;
            }
        }
        while(first!=slow){
            temp.push_back(first->val);
            first=first->next;
        }
        while(second!=end){
            temp.push_back(second->val);
            second=second->next;
        }
        ListNode *cur=start;
        for(auto i:temp){
            cur->val=i;
            cur=cur->next;
        }
        temp.clear();
    }
    void mergeSort(ListNode *start,ListNode *end,vector<int>& temp){
        if(start==end || start->next==end) return;
        ListNode *slow=start,*fast=start;
        while(fast!=end && fast->next!=end){
            slow=slow->next;
            fast=fast->next->next;
        }
        mergeSort(start,slow,temp);
        mergeSort(slow,end,temp);
        merge(start,slow,end,temp);
    }
    ListNode* sortList(ListNode* head) {
        if(!head || !head->next) return head;
        vector<int> temp;
        mergeSort(head,NULL,temp);
        return head;
    }
};