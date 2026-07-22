class Solution {
public:
    long long maximumValue(int n, int s, int m) {
        if(n==1) return s;
        long long r=n/2-1,mul=n/2;
        return s+m*mul-r;
    }
};