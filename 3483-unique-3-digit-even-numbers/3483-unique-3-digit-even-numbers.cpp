class Solution {
public:
    int totalNumbers(vector<int>& arr) {
        int n=arr.size(),ans=0;
        unordered_map<int,int> mp;
        for(auto i:arr) mp[i]++;
        for(int i=1;i<=9;i++){
            if(mp[i]==0) continue;
            mp[i]--;
            for(int j=0;j<=9;j++){
                if(mp[j]==0) continue;
                mp[j]--;
                for(int k=0;k<=8;k+=2){
                    if(mp[k]) ans++;
                }
                mp[j]++;
            }
            mp[i]++;
        }
        return ans;
    }
};