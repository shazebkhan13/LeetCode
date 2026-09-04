class Solution {
public:
    bool checkPrime(int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    int maximumPrimeDifference(vector<int>& arr) {
        int n=arr.size(),start,end,i=0,j=n-1;
        while(!checkPrime(arr[i])) i++;
        while(!checkPrime(arr[j])) j--;
        return j-i;
    }
};