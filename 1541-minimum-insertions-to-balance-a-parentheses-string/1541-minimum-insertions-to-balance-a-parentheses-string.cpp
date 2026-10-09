class Solution {
public:
    int minInsertions(string s) {
        stack<char> st;
        int n=s.size(),ans=0,i=0;
        while(i<n){
            if(s[i]=='(') st.push(s[i]);
            else{
                if(i<n-1&&s[i+1]==')'){
                    i++;
                    if(st.empty()) ans++;
                    else st.pop();
                }
                else{
                    if(st.empty()) ans+=2;
                    else{
                        ans++;
                        st.pop();
                    }
                }
            }
            i++;
        }
        return ans+st.size()*2;
    }
};