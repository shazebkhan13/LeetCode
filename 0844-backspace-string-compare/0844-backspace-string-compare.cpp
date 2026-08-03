class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> first,second;
        for(auto i:s){
            if(i=='#'){
                if(first.size()) first.pop();
            }
            else first.push(i);
        }
        for(auto i:t){
            if(i=='#'){
                if(second.size()) second.pop();
            }
            else second.push(i);
        }
        if(first.size()!=second.size()) return false;
        while(first.size()){
            if(first.top()!=second.top()) return false;
            first.pop(),second.pop();
        }
        return true;
    }
};