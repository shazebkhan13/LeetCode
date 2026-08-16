class Solution {
public:
    long long dividePlayers(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),sum=arr[0]+arr[n-1],start=0,end=n-1;
        long long ans=0;
        while(start<end){
            if(arr[start]+arr[end]==sum) ans+=1LL*arr[start]*arr[end];
            else return -1;
            start++,end--;
        }
        return ans;
    }
};