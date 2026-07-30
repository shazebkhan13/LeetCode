class Solution {
public:
    int minimumPushes(string word) {
        vector<bool> mp(26,false);
        for(auto i:word) mp[i-'a']=true;
        int cnt=0;
        for(auto i:mp) cnt+=i;
        int n,d=cnt/8;
        switch(d){
            case 0:
            n=0;
            break;
            case 1:
            n=8;
            break;
            case 2:
            n=24;
            break;
            case 3:
            n=48;
            break;
        }
        cout<<n;
        return n+(cnt%8)*(d+1);
    }
};