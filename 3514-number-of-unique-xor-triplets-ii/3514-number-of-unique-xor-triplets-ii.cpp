class Solution {
public:
    int uniqueXorTriplets(vector<int>& arr) {
        int n=arr.size();
        vector<bool> pair(2048,false),trip(2028,false);
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++) pair[arr[i]^arr[j]]=true;
        }
        for(int i=0;i<2048;i++){
            if(pair[i]){
                for(int j=0;j<n;j++) trip[i^arr[j]]=true;
            }
        }
        int cnt=0;
        for(int i=0;i<2048;i++){
            if(trip[i]) cnt++;
        }
        return cnt;
    }
};