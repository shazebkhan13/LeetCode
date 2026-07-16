class Solution {
public:
    long long gcdSum(vector<int>& arr) {
        int n=arr.size(),maxi=INT_MIN;
        vector<int> pre(n);
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
            pre[i]=gcd(arr[i],maxi);
        }
        sort(pre.begin(),pre.end());
        int start=0,end=n-1;
        long long ans=0;
        while(start<end) ans+=gcd(pre[start++],pre[end--]);
        return ans;
    }
};