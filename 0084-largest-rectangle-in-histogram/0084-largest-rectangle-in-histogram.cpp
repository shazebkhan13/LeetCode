class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size(),ans=0;
        stack<int> st;
        for(int i=0;i<n;i++){
            while(st.size()&&arr[i]<arr[st.top()]){
                int ind=st.top();
                st.pop();
                int pre=st.size()?st.top():-1;
                ans=max(ans,arr[ind]*(i-pre-1));
            }
            st.push(i);
        }
        while(st.size()){
            int next=n,i=st.top();
            st.pop();
            int pre=st.size()?st.top():-1;
            ans=max(ans,arr[i]*(next-pre-1));
        }
        return ans;
    }
};