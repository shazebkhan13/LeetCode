class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,vector<int>> mp;
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            mp[arr[i]].push_back(i);
            if(mp[arr[i]].size()==arr[i]){
                ans.push_back(mp[arr[i]]);
                mp[arr[i]].clear();
            }
        }
        return ans;
    }
};