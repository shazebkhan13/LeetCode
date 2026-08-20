class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int n=arr.size(),ans=-1;
        vector<pair<int,int>> mp;
        for(int i=0;i<n;i++){
            int sum=0,t=arr[i];
            while(t){
                sum+=t%10;
                t/=10;
            }
            mp.push_back({sum,arr[i]});
        }
        sort(mp.begin(),mp.end());
        for(int i=1;i<n;i++){
            if(mp[i].first==mp[i-1].first) ans=max(ans,mp[i].second+mp[i-1].second);
        }
        return ans;
    }
};