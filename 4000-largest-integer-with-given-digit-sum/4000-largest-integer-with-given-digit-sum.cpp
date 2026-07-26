class Solution {
public:
    int largestInteger(int n, int s) {
        int ans=0;
        while(n--){
            int t=s>9?9:s;
            ans=ans*10+t;
            s-=t;
        }
        return s>0?-1:ans;
    }
};