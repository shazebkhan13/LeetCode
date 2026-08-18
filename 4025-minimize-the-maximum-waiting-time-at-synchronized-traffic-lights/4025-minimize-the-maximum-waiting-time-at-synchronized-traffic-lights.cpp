class Solution {
public:
    int minPenalty(int period, vector<int>& lights, vector<int>& arrivalTime) {
        int maxi=*max_element(lights.begin(),lights.end()),ans=0;
        for(auto i:arrivalTime){
            int r=i%period;
            if(r>=maxi) ans=max(ans,period-r);
        }
        return ans;
    }
};