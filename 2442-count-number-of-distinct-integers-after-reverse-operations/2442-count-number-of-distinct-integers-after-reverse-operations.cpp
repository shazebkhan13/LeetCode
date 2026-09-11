class Solution {
public:
    int countDistinctIntegers(vector<int>& arr) {
        unordered_set<int> st;
        for(auto i:arr){
            st.insert(i);
            int x=0;
            while(i){
                x=x*10+i%10;
                i/=10;
            }
            st.insert(x);
        }
        return st.size();
    }
};