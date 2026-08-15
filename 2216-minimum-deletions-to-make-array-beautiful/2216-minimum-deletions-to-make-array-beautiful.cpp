class Solution {
public:
    int minDeletion(vector<int>& arr) {
        int n=arr.size(),ind=0,i=0;
        vector<int> ans;
        while(i<n){
            while(ind%2&&arr[i]==arr[i-1]){
                i++;
                if(i>=n) break;
            }
            if(i>=n) break;
            ans.push_back(arr[i]);
            ind++,i++;
        }
        if(ans.size()%2) ans.pop_back();
        return n-ans.size();
    }
};