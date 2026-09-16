class Solution {
public:
    int hIndex(vector<int>& arr) {
        int n=arr.size(),start=0,end=n-1,ans=0;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]>=n-mid){
                ans=n-mid;
                end=mid-1;
            }
            else start=mid+1;
        }
        return ans;
    }
};