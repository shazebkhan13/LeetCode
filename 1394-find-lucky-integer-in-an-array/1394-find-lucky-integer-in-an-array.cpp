class Solution {
public:
    int findLucky(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),ans=-1,fre=1;
        for(int i=1;i<n;i++){
            if(arr[i]==arr[i-1]) fre++;
            else{
                if(fre==arr[i-1]) ans=max(ans,fre);
                fre=1;
            }
        }
        if(fre==arr[n-1]) ans=max(ans,fre);
        return ans;
    }
};