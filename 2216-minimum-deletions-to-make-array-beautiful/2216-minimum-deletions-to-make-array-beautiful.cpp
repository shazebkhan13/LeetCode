class Solution {
public:
    int minDeletion(vector<int>& arr) {
        int n=arr.size(),ans=0;
        for(int i=0;i<n-1;i++){
            if((i-ans)%2==0&&arr[i]==arr[i+1]) ans++;
        }
        return ans+(n-ans)%2;
    }
};