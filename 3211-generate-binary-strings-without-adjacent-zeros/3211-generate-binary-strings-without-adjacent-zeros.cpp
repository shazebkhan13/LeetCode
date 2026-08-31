class Solution {
public:
    void gen(int n,vector<string>& ans,string& s){
        if(n==0){
            ans.push_back(s);
            return;
        }
        if(s.empty()||s.back()=='1'){
            s.push_back('1');
            gen(n-1,ans,s);
            s.pop_back();
            s.push_back('0');
            gen(n-1,ans,s);
            s.pop_back();
        }
        else{
            s.push_back('1');
            gen(n-1,ans,s);
            s.pop_back();
        }
    }
    vector<string> validStrings(int n) {
        string s="";
        vector<string> ans;
        gen(n,ans,s);
        return ans;
    }
};