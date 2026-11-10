class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        int n=s1.size();
        string a="",b="";
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                a+=s1[i];
                b+=s2[i];
            }
            else if(a!=""){
                ans.push_back({a,b});
                a.clear(),b.clear();
            }
        }
        if(a!=""){
            ans.push_back({a,b});
        }
        return ans;
    }
};