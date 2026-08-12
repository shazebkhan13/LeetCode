class Solution {
public:
    int maxSubarrayLength(vector<int>& arr, int k) {
        int n=arr.size(),i=0,j=0,ans=0;
        unordered_map<int,int> mp;
        while(j<n){
            while(mp[arr[j]]==k){
                mp[arr[i]]--;
                i++;
            }
            mp[arr[j]]++;
            ans=max(ans,j-i+1);
            j++;
        }
        return ans;
    }
};