class Solution {
public:
    string evaluate(string s, vector<vector<string>>& arr) {
        int n=s.size();
        string ans="";
        unordered_map<string,string> mp;
        for(auto i:arr) mp[i[0]]=i[1];
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                string key="";
                i++;
                while(s[i]!=')') key+=s[i++];
                ans+=mp[key]==""?"?":mp[key];
            }
            else ans+=s[i];
        }
        return ans;
    }
};