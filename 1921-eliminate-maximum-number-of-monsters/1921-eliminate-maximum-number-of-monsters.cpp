class Solution {
public:
    int eliminateMaximum(vector<int>& dist, vector<int>& speed) {
        int n=dist.size(),ans=0;
        vector<pair<float,int>> time(n);
        for(int i=0;i<n;i++) time[i]={(float)dist[i]/(float)speed[i],i};
        sort(time.begin(),time.end());
        for(int i=0;i<n;i++){
            dist[time[i].second]-=i*speed[time[i].second];
            if(dist[time[i].second]>0) ans++;
            else return ans;
        }
        return ans;
    }
};