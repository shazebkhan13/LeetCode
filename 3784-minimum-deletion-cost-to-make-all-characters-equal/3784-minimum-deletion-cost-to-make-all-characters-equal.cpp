class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        int n=s.size();
        long long total=0;
        for(int i=0;i<n;i++) total+=cost[i];
        unordered_map<char,long long> mp;
        for(int i=0;i<n;i++) mp[s[i]]+=cost[i];
        long long ans=LLONG_MAX;
        for(auto i:mp){
            cout<<ans<<" ";
            ans=min(ans,total-i.second);
            cout<<ans<<endl;
        }
        return ans;
    }
};