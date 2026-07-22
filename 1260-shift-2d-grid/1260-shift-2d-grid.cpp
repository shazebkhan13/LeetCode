class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& arr, int k) {
        int m=arr.size(),n=arr[0].size();
        k%=m*n;
        while(k--){
            int temp=arr[m-1][n-1];
            for(int i=m*n-1;i>0;i--){
                arr[i/n][i%n]=arr[(i-1)/n][(i-1)%n];
            }
            arr[0][0]=temp;
        }
        return arr;
    }
};