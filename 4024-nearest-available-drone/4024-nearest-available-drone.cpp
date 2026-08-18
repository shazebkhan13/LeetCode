class Solution {
public:
    int nearestDrone(vector<vector<int>>& arr, vector<int>& target) {
        int n=arr.size();
        int ans=-1,man=INT_MAX;
        for(int i=0;i<n;i++){
            int dis=abs(target[0]-arr[i][0])+abs(target[1]-arr[i][1]);
            if(dis<=arr[i][2]&&dis<man){
                man=dis;
                ans=i;
            }
        }
        return ans;
    }
};