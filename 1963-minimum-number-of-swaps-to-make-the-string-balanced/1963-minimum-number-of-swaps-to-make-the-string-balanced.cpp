class Solution {
public:
    int minSwaps(string s) {
        int n=s.size(),j=n-1,left=0,right=0,ans=0;
        for(int i=0;i<n;i++){
            s[i]=='['?left++:right++;
            if(right>left){
                while(j>i&&s[j]==']') j--;
                swap(s[i],s[j]);
                right--,left++;
                ans++;
            }
        }
        return ans;
    }
};