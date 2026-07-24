class Solution {
public:
    long long mod=1e9+7;
    int divisibleGame(vector<int>& arr) {
        set<int> st={2};
        for(int i:arr){
            if(i>1) st.insert(i);
            for(int j=2;j*j<=i;j++){
                if(i%j==0){
                    st.insert(j);
                    st.insert(i/j);
                }
            }
        }
        long long maxi=LLONG_MIN,ans=0;
        for(int k:st){
            long long temp=LLONG_MIN,sum=0;
            for(long long i:arr){
                if(i%k==0) sum=max(sum+i,i);
                else sum=max(sum-i,-i);
                temp=max(temp,sum);
            }
            if(temp>maxi){
                maxi=temp;
                ans=(maxi*k+mod)%mod;
            }
        }
        return ans;
    }
};