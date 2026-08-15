class Solution {
public:
    int longestSubsequence(vector<int>& arr) {
        int n=arr.size(),x=0,cnt=0;
        for(auto i:arr){
            x^=i;
            if(i) cnt++;
        }
        if(x) return n;
        if(cnt) return n-1;
        return 0;
    }
};