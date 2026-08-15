class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        for(auto i:s) mp[i]++;
        unordered_map<int,bool> check;
        int ans=0;
        for(auto i:mp){
            while(i.second>0&&check[i.second]){
                i.second--;
                ans++;
            }
            check[i.second]=true;
        }
        return ans;
    }
};