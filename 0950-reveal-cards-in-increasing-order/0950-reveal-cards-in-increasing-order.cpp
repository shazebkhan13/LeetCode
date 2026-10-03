class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        int n=deck.size();
        deque<int> q;
        vector<int> ans(n);
        for(int i=0;i<n;i++) q.push_back(i);
        for(int i:deck){
            int ind=q.front();
            q.pop_front();
            ans[ind]=i;
            if(!q.empty()){
                q.push_back(q.front());
                q.pop_front();
            }
        }
        return ans;
    }
};