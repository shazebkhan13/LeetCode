class Solution {
public:
    vector<vector<int>> aggregateTimeSeries(vector<vector<int>>& arr, vector<vector<int>>& brr) {
        int m=arr.size(),n=brr.size(),i=0,j=0;
        vector<vector<int>> ans;
        while(i<m && j<n){
            if(arr[i][0]<brr[j][0]) ans.push_back({arr[i][0],arr[i++][1]+brr[j][1]});
            else{
                ans.push_back({brr[j][0],arr[i][1]+brr[j][1]});
                if(arr[i][0]==brr[j][0]) i++;
                j++;
            }
        }
        while(i<m) ans.push_back(arr[i++]);
        while(j<n) ans.push_back(brr[j++]);
        return ans;
    }
};