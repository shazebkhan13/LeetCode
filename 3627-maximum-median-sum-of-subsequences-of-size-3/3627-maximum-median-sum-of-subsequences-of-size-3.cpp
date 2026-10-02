class Solution {
public:
    long long maximumMedianSum(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int n=nums.size()/3;
        long long ans=0;
        for(int i=1;i<2*n;i+=2) ans+=nums[i];
        return ans;
    }
};