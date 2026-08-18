class Solution {
public:
    int largestInteger(vector<int>& arr, int k) {
        int n=arr.size();
        if(k==n) return *max_element(arr.begin(),arr.end());
        unordered_map<int,int> mp;
        for(auto i:arr) mp[i]++;
        int maxi=-1;
        if(k==1){
            for(auto i:mp) if(i.second==1) maxi=max(maxi,i.first);
            return maxi;
        }
        if(mp[arr[0]]>1){
            if(mp[arr[n-1]]>1) return -1;
            else return arr[n-1];
        }
        else{
            if(mp[arr[n-1]]>1) return arr[0];
            else return max(arr[0],arr[n-1]);
        }
        return -1;
    }
};