class Solution {
public:
    int minimumSumSubarray(vector<int>& arr, int l, int r) {
        int n=arr.size(),best=INT_MAX;
        for(int i=l;i<=r;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=arr[j];
                if(j>=i) sum-=arr[j-i];
                if(j>=i-1&&sum>0&&sum<best) best=sum;
            }
        }
        return best==INT_MAX?-1:best;
    }
};