class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size(),start=0,end=0,cnt=0,mini=INT_MAX;
        string ans="";
        while(end<n){
            if(s[end]=='1') cnt++;
            while(cnt>k&&start<=end){
                if(s[start]=='1') cnt--;
                start++;
            }
            while(s[start]=='0') start++;
            if(cnt==k){
                int len=end-start+1;
                string sub=s.substr(start,len);
                if(len<mini){
                    mini=len;
                    ans=sub;
                }
                else if(len==mini&&sub<ans) ans=sub;
            }
            end++;
        }
        return ans;
    }
};