class Solution {
public:
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        int n=img1.size(),ans=0;
        vector<pair<int,int>> pos1,pos2;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(img1[i][j]==1) pos1.push_back({i,j});
                if(img2[i][j]==1) pos2.push_back({i,j});
            }
        }
        map<pair<int,int>,int> mp;
        for(auto a:pos1){
            for(auto b:pos2){
                int r=a.first-b.first;
                int c=a.second-b.second;
                ans=max(ans,++mp[{r,c}]);
            }
        }
        return ans;
    }
};