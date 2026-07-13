class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> arr;
        int n=8*(8+1)/2;
        int cur=12,prev=12,ext=11;
        for(int i=0;i<n;i++){
            if(cur%10==0){
                ext=ext*10+1;
                cur=prev*10+(prev%10+1);
                prev=cur;
            }
            arr.push_back(cur);
            cur+=ext;
        }
        vector<int> ans;
        for(int i=0;i<n;i++) if(arr[i]>=low && arr[i]<=high) ans.push_back(arr[i]);
        return ans;
    }
};