class Solution {
public:
    int secondsBetweenTimes(string start, string end) {
        int ans=0;
        ans+=(stoi(end.substr(0,2))-stoi(start.substr(0,2)))*3600;
        ans+=(stoi(end.substr(3,2))-stoi(start.substr(3,2)))*60;
        ans+=stoi(end.substr(6,2))-stoi(start.substr(6,2));
        return ans;
    }
};