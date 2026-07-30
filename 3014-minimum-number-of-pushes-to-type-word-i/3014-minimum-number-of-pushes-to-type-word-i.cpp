class Solution {
public:
    int minimumPushes(string word) {
        int cnt=0,ans=0,t=1;
        for(auto i:word){
            ans+=t;
            cnt++;
            if(cnt==8){
                cnt=0;
                t++;
            }
        }
        return ans;
    }
};