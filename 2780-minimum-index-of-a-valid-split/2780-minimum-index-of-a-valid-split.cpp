class Solution {
public:
    int minimumIndex(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp1,mp2;
        for(auto i:arr) mp1[i]++;
        for(int i=0;i<n-1;i++){
            int s=--mp1[arr[i]],f=++mp2[arr[i]];
            if(f>(i+1)/2&&s>(n-1-i)/2) return i;
        }
        return -1;
    }
};