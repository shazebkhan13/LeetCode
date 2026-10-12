class Solution {
public:
    bool threeFibonacciSum(int n) {
        if(n%2) return false;
        int f=0,s=1;
        while(s<n){
            if(f+s==n/2) return true;
            int temp=f;
            f=s;
            s+=temp;
        }
    return false;
    }
};