class Solution {
public:
    int longestValidParentheses(string s) {
        int n=s.size(),ans=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(i);
            else{
                if(st.empty()||s[st.top()]==')') st.push(i);
                else{
                    st.pop();
                    ans=st.empty()?i+1:max(ans,i-st.top());
                }
            }
        }
        return ans;
    }
};