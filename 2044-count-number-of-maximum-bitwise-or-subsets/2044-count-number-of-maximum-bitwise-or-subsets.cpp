class Solution {
public:
    void fun(vector<int>& arr,int i,int maxi,int& ans,int cur){
        if(cur==maxi) ans++;
        for(int ind=i;ind<arr.size();ind++) fun(arr,ind+1,maxi,ans,arr[ind]|cur);
    }
    int countMaxOrSubsets(vector<int>& arr) {
        int maxi=0,ans=0;
        for(auto i:arr) maxi|=i;
        fun(arr,0,maxi,ans,0);
        return ans;
    }
};