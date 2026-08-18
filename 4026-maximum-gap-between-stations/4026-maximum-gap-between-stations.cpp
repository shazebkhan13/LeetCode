class Solution {
public:
    int maximumGap(string skill, string station) {
        int m=station.size(),n=skill.size();
        vector<int> pre(n),suf(n);
        int j=0;
        for(int i=0;i<m;i++){
            if(station[i]==skill[j]) pre[j++]=i;
            if(j==n) break;
        }
        j=n-1;
        for(int i=m-1;i>=0;i--){
            if(station[i]==skill[j]) suf[j--]=i;
            if(j<0) break;
        }
        int ans=0;
        for(int i=1;i<n;i++) ans=max(ans,suf[i]-pre[i-1]);
        return ans;
    }
};