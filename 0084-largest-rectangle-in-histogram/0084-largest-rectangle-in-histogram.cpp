class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector<int> pre(n,-1),next(n,n);
        stack<int> first,second;
        int i=0,j=n-1;
        while(i<n){
            while(!first.empty()&&arr[i]<arr[first.top()]){
                next[first.top()]=i;
                first.pop();
            }
            while(!second.empty()&&arr[j]<arr[second.top()]){
                pre[second.top()]=j;
                second.pop();
            }
            first.push(i),second.push(j);
            i++,j--;
        }
        for(auto i:pre) cout<<i<<" ";
        cout<<endl;
        for(auto i:next) cout<<i<<" ";
        int ans=0;
        for(int i=0;i<n;i++) ans=max(ans,arr[i]*(next[i]-pre[i]-1));
        return ans;
    }
};