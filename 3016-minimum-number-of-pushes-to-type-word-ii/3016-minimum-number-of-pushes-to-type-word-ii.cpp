class Solution {
public:
    int minimumPushes(string word) {
        vector<int> mp(26);
        for(auto i:word) mp[i-'a']++;
        sort(mp.rbegin(),mp.rend());
        int ans=0,cnt=0,t=1;
        for(auto i:mp){
            if(i==0) break;
            ans+=t*i;
            cnt++;
            if(cnt==8){
                cnt=0;
                t++;
            }
        }
        return ans;
    }
};