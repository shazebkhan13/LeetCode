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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        ListNode *cur=head;
        int ind=1;
        vector<int> arr;
        while(cur->next->next){
            if((cur->next->val>cur->val&&cur->next->val>cur->next->next->val)||(cur->next->val<cur->val&&cur->next->val<cur->next->next->val)) arr.push_back(ind);
            ind++;
            cur=cur->next;
        }
        if(arr.size()<2) return {-1,-1};
        int mini=INT_MAX;
        for(int i=0;i<arr.size()-1;i++) mini=min(mini,arr[i+1]-arr[i]);
        return {mini,arr.back()-arr[0]};
    }
};