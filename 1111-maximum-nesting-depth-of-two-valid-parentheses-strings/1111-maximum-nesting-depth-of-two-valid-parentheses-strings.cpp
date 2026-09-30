class Solution {
public:
    vector<int> maxDepthAfterSplit(string s) {
        stack<int> st;
        vector<int> ans;
        for(auto i:s){
            if(i=='('){
                if(st.empty()||st.top()==1) st.push(0);
                else st.push(1);
                ans.push_back(st.top());
            }
            else{
                ans.push_back(st.top());
                st.pop();
            }
        }
        return ans;
    }
};