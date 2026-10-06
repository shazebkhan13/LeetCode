class Solution {
public:
    int minSwaps(string s) {
        int n=s.size(),j=n-1,bal=0,ans=0;
        for(int i=0;i<n;i++){
            s[i]=='['?bal++:bal--;
            if(bal<0){
                bal=1;
                ans++;
            }
        }
        return ans;
    }
};