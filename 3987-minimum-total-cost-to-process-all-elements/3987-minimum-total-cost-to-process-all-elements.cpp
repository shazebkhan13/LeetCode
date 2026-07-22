class Solution {
public:
    int mod=1000000007;
    int minimumCost(vector<int>& arr, int k) {
        long long n=arr.size(),cnt=0,res=k;
        for(int i=0;i<n;i++){
            if(res<arr[i]){
                cnt+=(arr[i]-res)/k;
                res+=k*((arr[i]-res)/k);
            }
            if(res<arr[i]){
                res+=k,cnt++;
            }
            res-=arr[i];
        }
        return ((cnt%mod)*((cnt+1)%mod)/2)%mod;
    }
};