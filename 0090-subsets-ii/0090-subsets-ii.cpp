class Solution {
public:
    void sub(vector<int>& arr,int i,vector<int>& temp,vector<vector<int>>& ans){
        if(i==arr.size()){
            if(find(ans.begin(),ans.end(),temp)==ans.end()) ans.push_back(temp);
            return;
        }
        sub(arr,i+1,temp,ans);
        temp.push_back(arr[i]);
        sub(arr,i+1,temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        sub(nums,0,temp,ans);
        return ans;
    }
};