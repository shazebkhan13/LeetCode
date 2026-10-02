class Solution {
public:
    void helper(int l,int r,int n,vector<string>& ans,string& temp){
        if(l==n&&r==n){
            ans.push_back(temp);
            return;
        }
        if(l<n){
            temp+="(";
            helper(l+1,r,n,ans,temp);
            temp.pop_back();
        }
        if(l>r){
            temp+=")";
            helper(l,r+1,n,ans,temp);
            temp.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        string temp="";
        helper(0,0,n,ans,temp);
        return ans;
    }
};