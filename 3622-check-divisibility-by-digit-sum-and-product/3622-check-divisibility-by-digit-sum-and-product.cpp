class Solution {
public:
    bool checkDivisibility(int n) {
        int k=n,sum=0,mul=1;
        while(k){
            sum+=k%10;
            mul*=k%10;
            k/=10;
        }
        return n%(sum+mul)==0;
    }
};