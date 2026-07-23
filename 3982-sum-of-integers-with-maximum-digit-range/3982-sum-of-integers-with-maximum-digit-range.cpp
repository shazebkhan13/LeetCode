class Solution {
public:
    int maxDigitRange(vector<int>& arr) {
        int n=arr.size(),ans=0,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            string s=to_string(arr[i]);
            sort(s.begin(),s.end());
            int range=s.back()-s[0];
            if(range==maxi) ans+=arr[i];
            else if(range>maxi){
                maxi=range;
                ans=arr[i];
            }
        }
        return ans;
    }
};