class Solution {
public:
    int maxDepth(string s) {
        int cnt=0,ans=0;
        for(auto i:s){
            if(i=='(') ans=max(ans,++cnt);
            else if(i==')') cnt--;
        }
        return ans;
    }
};