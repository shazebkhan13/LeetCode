class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        int ans=0,temp=0;
        for(auto i:s){
            if(i=='(') st.push(0);
            else{
                temp=st.top()?st.top()*2:1;
                st.pop();
                if(st.empty()) ans+=temp;
                else st.top()+=temp;
            }
        }
        return ans;
    }
};