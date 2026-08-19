class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        for(auto i:s){
            if(i!='*') st.push(i);
            else st.pop();
        }
        string ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};