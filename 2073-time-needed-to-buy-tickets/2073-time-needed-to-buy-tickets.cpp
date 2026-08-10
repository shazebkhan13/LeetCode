class Solution {
public:
    int timeRequiredToBuy(vector<int>& arr, int k) {
        int n=arr.size(),ans=0;
        queue<int>q;
        for(int i=0;i<n;i++) q.push(i);
        while(arr[k]){
            arr[q.front()]--;
            ans++;
            if(arr[q.front()]) q.push(q.front());
            q.pop();
        }
        return ans;
    }
};