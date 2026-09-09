class Solution {
public:
    using ll=long long;
    long long countCommas(long long n) {
        return max(0LL,n-(ll)1e3+1)+max(0LL,n-(ll)1e6+1)+max(0LL,n-(ll)1e9+1)+max(0LL,n-(ll)1e12+1)+max(0LL,n-(ll)1e15+1);
    }
};