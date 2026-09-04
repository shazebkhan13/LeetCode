class Solution {
public:
    int firstStableIndex(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> mini(n),maxi(n);
        maxi[0]=arr[0],mini[n-1]=arr[n-1];
        int i=1,j=n-2;
        while(i<n){
            maxi[i]=max(arr[i],maxi[i-1]);
            mini[j]=min(arr[j],mini[j+1]);
            i++,j--;
        }
        for(int i=0;i<n;i++){
            if(maxi[i]-mini[i]<=k) return i;
        }
        return -1;
    }
};