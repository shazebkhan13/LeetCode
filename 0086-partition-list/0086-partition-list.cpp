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
    ListNode* partition(ListNode* head, int x) {
        vector<int> smaller,greater;
        ListNode *cur=head;
        while(cur){
            if(cur->val<x) smaller.push_back(cur->val);
            else greater.push_back(cur->val);
            cur=cur->next;
        }
        cur=head;
        for(auto i:smaller){
            cur->val=i;
            cur=cur->next;
        }
        for(auto i:greater){
            cur->val=i;
            cur=cur->next;
        }
        return head;
    }
};