class Solution {
public:
    int minMoves2(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size(),med=arr[n/2],ans=0;
        for(auto i:arr) ans+=abs(i-med);
        return ans;
    }
};