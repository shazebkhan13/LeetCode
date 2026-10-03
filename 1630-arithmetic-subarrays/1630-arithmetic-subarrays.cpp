class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& arr, vector<int>& l, vector<int>& r) {
        int n=arr.size(),m=l.size();
        vector<bool> ans(m,true);
        vector<int> temp;
        for(int i=0;i<m;i++){
            for(int j=l[i];j<=r[i];j++) temp.push_back(arr[j]);
            sort(temp.begin(),temp.end());
            int dif=temp[1]-temp[0];
            for(int j=1;j<temp.size()-1;j++) if(temp[j+1]-temp[j]!=dif) ans[i]=false;
            temp.clear();
        }
        return ans;
    }
};