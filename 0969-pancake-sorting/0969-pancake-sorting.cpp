class Solution {
public:
    vector<int> pancakeSort(vector<int>& arr) {
        int n=arr.size(),end=n-1,x=n;
        vector<int> ans;
        while(end>0){
            int i=0;
            while(arr[i]!=x) i++;
            reverse(arr.begin(),arr.begin()+i+1);
            ans.push_back(i+1);
            reverse(arr.begin(),arr.begin()+end+1);
            ans.push_back(end+1);
            end--,x--;
        }
        return ans;
    }
};