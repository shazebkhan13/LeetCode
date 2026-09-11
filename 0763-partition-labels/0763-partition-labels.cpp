class Solution {
public:
    bool checkEmpty(string& s,int i,unordered_map<char,int>& mp){
        for(int j=0;j<=i;j++){
            if(mp[s[j]]) return false;
        }
        return true;
    }
    vector<int> partitionLabels(string s) {
        unordered_map<char,int> mp;
        for(auto i:s) mp[i]++;
        int start=0;
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            mp[s[i]]--;
            if(checkEmpty(s,i,mp)){
                ans.push_back(i-start+1);
                start=i+1;
            }
        }
        return ans;
    }
};