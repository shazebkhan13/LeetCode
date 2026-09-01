class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n=A.size(),cnt=0;
        vector<int> ans(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp[A[i]]++) cnt++;
            if(mp[B[i]]++) cnt++;
            ans[i]=cnt;
        }
        return ans;
    }
};