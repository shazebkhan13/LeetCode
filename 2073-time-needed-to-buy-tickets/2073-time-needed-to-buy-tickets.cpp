class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        int n=arr.size(),ans=0;
        queue<int>q;
        for(int i=0;i<n;i++) q.push(i);
        while(arr[k]){
            int f=q.front();
            arr[f]--;
            q.pop();
            if(arr[f]) q.push(f);
            ans++;
        }
        return ans;
    }
};