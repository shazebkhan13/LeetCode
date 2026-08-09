class Solution {
public:
    int minimumDeletions(vector<int>& arr) {
        int n=arr.size(),mini=INT_MAX,maxi=INT_MIN,first,second,ans=0;
        if(n==1) return 1;
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
                first=i;
            }
            if(arr[i]>maxi){
                maxi=arr[i];
                second=i;
            }
        }
        if(first>second) swap(first,second);
        return min({second+1,n-first,first+1+n-second});
    }
};