class Solution {
public:
    int minKBitFlips(vector<int>& arr, int k) {
        int n=arr.size(),ans=0;
        queue<int> q;
        for(int i=0;i<n;i++){
            if(!q.empty()&&q.front()<i) q.pop();
            if(q.size()%2) arr[i]=!arr[i];
            if(arr[i]==0){
                if(i+k-1>=n) return -1;
                ans++;
                q.push(i+k-1);
            }
        }
        return ans;
    }
};