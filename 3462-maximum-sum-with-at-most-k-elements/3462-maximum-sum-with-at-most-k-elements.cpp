class Solution {
public:
    long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
        int m=grid.size(),n=grid[0].size();
        vector<int> ans;
        for(int i=0;i<m;i++){
            sort(grid[i].rbegin(),grid[i].rend());
            for(int j=0;j<limits[i];j++) ans.push_back(grid[i][j]);
        }
        sort(ans.rbegin(),ans.rend());
        long long ret=0;
        for(int i=0;i<k;i++) ret+=ans[i];
        return ret;
    }
};