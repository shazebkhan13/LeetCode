class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
        int m=arr.size(),n=arr[0].size();
        k%=m*n;
        vector<vector<int>> ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int ind=(i*n+j+k)%(m*n);
                ans[ind/n][ind%n]=arr[i][j];
            }
        }
        return ans;
    }
};