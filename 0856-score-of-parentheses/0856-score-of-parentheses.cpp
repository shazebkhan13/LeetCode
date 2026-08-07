class Solution {
public:
    int scoreOfParentheses(string s) {
        int n=s.size(),ans=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            if(s[i]=='(') st.push(0);
            else{
                int temp=2*st.top();
                st.pop();
                if(temp==0) temp++;
                if(st.size()) st.top()+=temp;
                else ans+=temp;
            }
        }
        return ans;
    }
};