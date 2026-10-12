class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> isPrime(n+1,true);
        for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                int j=i*i;
                while(j<=n){
                    isPrime[j]=false;
                    j+=i;
                }
            }
        }
        long long sum=0;
        vector<int> ans;
        for(int i=2;i<=n&&sum+i<=s;i++){
            if(isPrime[i]){
                sum+=i;
                ans.push_back(i);
            }
        }
        return ans;
    }
};