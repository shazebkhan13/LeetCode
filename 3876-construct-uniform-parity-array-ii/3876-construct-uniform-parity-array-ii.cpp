class Solution {
public:
    bool uniformArray(vector<int>& arr) {
        int mini=INT_MAX;
        for(auto i:arr) mini=min(mini,i);
        int mod=mini%2;
        for(auto i:arr){
            if(i%2!=mod&&(i-mini)%2!=mod) return false;
        }
        return true;
    }
};