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
        int ind=1,first=INT_MIN,last=INT_MAX,mini=INT_MAX;
        vector<int> arr;
        while(cur->next->next){
            if((cur->next->val>cur->val&&cur->next->val>cur->next->next->val)||(cur->next->val<cur->val&&cur->next->val<cur->next->next->val)){
                if(first==INT_MIN) first=ind;
                if(last!=INT_MAX) mini=min(mini,ind-last);
                last=ind;
            }
            ind++;
            cur=cur->next;
        }
        if(mini==INT_MAX||first==INT_MIN||last==INT_MAX) return {-1,-1};
        return {mini,last-first};
    }
};