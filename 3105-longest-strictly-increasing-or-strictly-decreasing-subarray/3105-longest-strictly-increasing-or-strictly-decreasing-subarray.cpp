class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        int n=arr.size(),len1=1,len2=1,ans1=1,ans2=1;
        for(int i=0;i<n-1;i++){
            ans1=max(ans1,len1);
            ans2=max(ans2,len2);
            if(arr[i+1]>arr[i]){
                len1++;
                len2=1;
            }
            else if(arr[i+1]<arr[i]){
                len1=1;
                len2++;
            }
            else{
                len1=len2=1;
            }
        }
        return max({ans1,ans2,len1,len2});
    }
};