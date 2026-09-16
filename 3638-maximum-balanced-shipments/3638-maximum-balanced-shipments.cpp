class Solution {
public:
    int maxBalancedShipments(vector<int>& arr) {
        int n=arr.size(),ans=0;
        stack<int> st;
        for(auto i:arr){
            if(st.empty()||i>=st.top()) st.push(i);
            else{
                while(!st.empty()) st.pop();
                ans++;
            }
        }
        return ans;
    }
};