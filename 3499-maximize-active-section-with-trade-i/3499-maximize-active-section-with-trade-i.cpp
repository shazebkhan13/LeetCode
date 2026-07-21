class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size(),ones=0;
        for(auto i:s) if(i=='1') ones++;
        s="1"+s+"1";
        vector<pair<char,int>> pr;
        for(auto i:s){
            if(pr.empty() || pr.back().first!=i) pr.push_back({i,1});
            else pr.back().second++;
        }
        int zeroes=0;
        for(int i=1;i<pr.size()-1;i++){
            if(pr[i].first=='1' && pr[i-1].first=='0' && pr[i+1].first=='0') zeroes=max(zeroes,pr[i-1].second+pr[i+1].second);
        }
        return ones+zeroes;
    }
};