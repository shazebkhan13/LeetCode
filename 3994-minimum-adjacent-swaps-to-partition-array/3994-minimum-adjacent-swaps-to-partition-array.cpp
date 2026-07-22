class Solution {
public:
    int mod=1000000007;
    int minAdjacentSwaps(vector<int>& arr, int a, int b) {
        long long n=arr.size(),i=0,ones=0,twos=0,cnt=0;
        for(int i=0;i<n;i++){
            if(arr[i]<a) arr[i]=0;
            else if(arr[i]>b) arr[i]=2;
            else arr[i]=1;
        }
        for(int i=0;i<n;i++){
            if(arr[i]==0) cnt=(cnt+ones+twos)%mod;
            else if(arr[i]==1){
                cnt=(cnt+twos)%mod;
                ones++;
            }
            else twos++;
        }
        return cnt;
    }
};