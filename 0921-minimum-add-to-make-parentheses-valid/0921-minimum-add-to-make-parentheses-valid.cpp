class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char> st;
        int ans=0;
        for(auto i:s){
            if(i=='(') st.push(i);
            else{
                if(st.empty()) ans++;
                else st.pop();
            }
        }
        return ans+st.size();
    }
};