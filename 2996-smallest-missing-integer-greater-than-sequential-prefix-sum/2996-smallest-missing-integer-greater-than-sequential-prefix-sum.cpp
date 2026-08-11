class Solution {
public:
    int missingInteger(vector<int>& arr) {
        int n=arr.size(),i=1;
        long long sum=arr[0];
        unordered_map<int,int> mp;
        mp[arr[0]]=1;
         while(i<n&&arr[i]==arr[i-1]+1){
            sum+=arr[i];
            mp[arr[i]]++;
            i++;
        }
        while(i<n){
            mp[arr[i]]++;
            i++;
        }
        while(mp.contains(sum)) sum++;
        return sum;
    }
};