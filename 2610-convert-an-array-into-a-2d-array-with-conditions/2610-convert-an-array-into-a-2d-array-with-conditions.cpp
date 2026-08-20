class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& arr) {
        unordered_map<int,int> mp;
        int maxi=0;
        for(auto i:arr){
            mp[i]++;
            maxi=max(maxi,mp[i]);
        }
        cout<<maxi;
        vector<vector<int>> ans(maxi);
        for(auto i:mp){
            while(i.second--) ans[i.second].push_back(i.first);
        }
        return ans;
    }
};