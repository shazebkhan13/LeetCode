class Solution {
public:
    int longestSubsequence(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(auto i:arr) mp[i]++;
        if(mp.size()==1&&mp.contains(0)) return 0;
        int x=0;
        for(auto i:arr) x^=i;
        if(x==0) return n-1;
        for(auto i:mp){
            if(i.first&&i.second%2) return n;
        }
        return n-1;
    }
};