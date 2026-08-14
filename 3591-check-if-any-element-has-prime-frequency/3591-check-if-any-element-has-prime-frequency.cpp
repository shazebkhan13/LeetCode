class Solution {
public:
    bool checkPrime(int x){
        if(x<2) return false;
        for(int i=2;i*i<=x;i++){
            if(x%i==0) return false;
        }
        return true;
    }
    bool checkPrimeFrequency(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        for(auto i:arr) mp[i]++;
        for(auto i:mp){
            cout<<i.first<<"->"<<i.second<<endl;
            if(checkPrime(i.second)) return true;
        }
        return false;
    }
};