class Solution {
public:
    long long dividePlayers(vector<int>& arr) {
        int n=arr.size();
        long long total=0,ans=0;
        for(auto i:arr) total+=i;
        int sum=total/(n/2);
        unordered_map<int,int> mp;
        for(auto i:arr){
            int t=sum-i;
            if(mp[t]){
                ans+=1LL*i*t;
                mp[t]--;
            }
            else mp[i]++;
        }
        for(auto i:mp) if(i.second) return -1;
        return ans;
    }
};