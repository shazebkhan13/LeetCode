class Solution {
public:
    int firstUniqChar(string s) {
        int n=s.size();
        unordered_map<char,int> mp;
        queue<int> q;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
            q.push(i);
            if(mp[s[q.front()]]>1) q.pop();
        }
        while(!q.empty()&&mp[s[q.front()]]>1) q.pop();
        return q.empty()?-1:q.front();
    }
};