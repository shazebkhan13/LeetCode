class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<n;i++) mp[arr[i]].push_back(i);
        vector<int> ans(n);
        set<int> st(arr.begin(),arr.end());
        int rank=1;
        for(auto i:st){
            for(int j=0;j<mp[i].size();j++) ans[mp[i][j]]=rank;
            rank++;
        }
        return ans;
    }
};