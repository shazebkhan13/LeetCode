class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size(),i=0,j=1,ans=0;
        unordered_map<char,int> mp;
        mp[s[0]]=1;
        while(j<n){
            mp[s[j]]++;
            while(mp[s[j]]>2){
                mp[s[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
            j++;
        }
        // ans=max(ans,j-i+1);
        return ans;
    }
};