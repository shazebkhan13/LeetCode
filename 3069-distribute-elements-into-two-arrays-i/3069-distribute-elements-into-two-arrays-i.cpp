class Solution {
public:
    vector<int> resultArray(vector<int>& arr) {
        int n=arr.size();
        vector<int> a,b;
        a.push_back(arr[0]);
        b.push_back(arr[1]);
        for(int i=2;i<n;i++){
            if(a.back()>b.back()) a.push_back(arr[i]);
            else b.push_back(arr[i]);
        }
        a.insert(a.end(),b.begin(),b.end());
        return a;
    }
};