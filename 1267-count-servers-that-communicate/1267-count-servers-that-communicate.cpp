class Solution {
public:
    int countServers(vector<vector<int>>& arr) {
        int m=arr.size(),n=arr[0].size();
        vector<int> row(m),column(n);
        for(int i=0;i<m;i++){
            int t=0;
            for(int j=0;j<n;j++){
                t+=arr[i][j];
                if(t>1){
                    row[i]=1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            int t=0;
            for(int j=0;j<m;j++){
                t+=arr[j][i];
                if(t>1){
                    column[i]=1;
                    break;
                }
            }
        }
        int ans=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(arr[i][j]&&(row[i]||column[j])) ans++;
            }
        }
        return ans;
    }
};