class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string> ans;
        stack<int> st;
        int i=1,j=0;
        while(j<target.size()){
            ans.push_back("Push");
            st.push(i++);
            if(st.size()&&st.top()!=target[j]){
                ans.push_back("Pop");
                st.pop();
            }
            else j++;
        }
        return ans;
    }
};