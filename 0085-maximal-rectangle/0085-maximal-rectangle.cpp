class Solution {
public:
    int maximalRectangle(vector<vector<char>>& arr) {
        int m=arr.size(),n=arr[0].size(),ans=0;
        vector<int> v(n);
        stack<int> st;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++) v[j]=arr[i][j]=='1'?v[j]+1:0;
            for(int j=0;j<n;j++){
                while(st.size()&&v[j]<v[st.top()]){
                    int ind=st.top();
                    st.pop();
                    int pre=st.size()?st.top():-1;
                    ans=max(ans,v[ind]*(j-pre-1));
                }
                st.push(j);
            }
            while(st.size()){
                int j=n,ind=st.top();
                st.pop();
                int pre=st.size()?st.top():-1;
                ans=max(ans,v[ind]*(j-pre-1));
            }
        }
        return ans;
    }
};