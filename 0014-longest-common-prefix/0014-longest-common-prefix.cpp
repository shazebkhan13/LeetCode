class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        int n=s.size();
        string ans,temp=s[0];
        for(auto i:s) if(i.size()<temp.size()) temp=i;
        for(int i=0;i<temp.size();i++){
            char c=temp[i];
            for(int j=0;j<n;j++) if(s[j][i]!=c) return ans;
            ans+=c;
        }
        return ans;
    }
};