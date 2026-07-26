class Solution {
public:
    int maximumProduct(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),i=0,j=n-1;
        if(n==3) return arr[0]*arr[1]*arr[2];
        return max(arr[i]*arr[i+1]*arr[j],arr[j]*arr[j-1]*arr[j-2]);
    }
};