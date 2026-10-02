class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& arr, int k) {
        int m=arr.size(),n=arr[0].size();
        for(int i=0;i<m-1;i++){
            for(int j=0;j<m-1-i;j++){
                if(arr[j][k]<arr[j+1][k]){
                    for(int l=0;l<n;l++) swap(arr[j][l],arr[j+1][l]);
                }
            }
        }
        return arr;
    }
};