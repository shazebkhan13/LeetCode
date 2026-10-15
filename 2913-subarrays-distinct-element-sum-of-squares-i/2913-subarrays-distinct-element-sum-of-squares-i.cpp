class Solution {
public:
    int sumCounts(vector<int>& arr) {
        int n=arr.size(),ans=0;
        unordered_set<int> temp;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                temp.insert(arr[j]);
                int size=temp.size();
                ans+=size*size;
            }
            temp.clear();
        }
        return ans;
    }
};