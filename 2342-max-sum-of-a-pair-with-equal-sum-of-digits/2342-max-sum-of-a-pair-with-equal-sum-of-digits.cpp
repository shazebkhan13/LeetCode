class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size(),ans=-1;
        unordered_map<int,int> mp;
        for(auto i:arr){
            int sum=0,t=i;
            while(t){
                sum+=t%10;
                t/=10;
            }
            if(mp[sum]) ans=max(ans,mp[sum]+i);
            mp[sum]=max(mp[sum],i);
        }
        return ans;
    }
};