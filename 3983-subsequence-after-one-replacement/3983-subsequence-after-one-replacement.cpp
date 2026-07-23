class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        int n=s.size(),m=t.size();
        if(n==0) return true;
        if(n>m) return false;
        vector<int> pre(n,m),suf(n,-1);
        int p=0;
        for(int i=0;i<n;i++){
            while(p<m && s[i]!=t[p]) p++;
            if(p==m) break;
            pre[i]=p++;
        }
        if(pre[n-1]!=m) return true;
        p=m-1;
        for(int i=n-1;i>=0;i--){
            while(p>=0 && s[i]!=t[p]) p--;
            if(p<0) break;
            suf[i]=p--;
        }
        for(int i=0;i<n;i++){
            int a=(i==0)?-1:pre[i-1];
            int b=(i==n-1)?m:suf[i+1];
            if(a!=m && b!=-1 && b-a>=2) return true;
        }
        return false;
    }
};