class Solution {
public:
    string rearrangeString(string s, char x, char y) {
        int n=s.size(),start=0,end=n-1,i=0;
        while(i<=end){
            if(s[i]==y) swap(s[i++],s[start++]);
            else if(s[i]==x) swap(s[i],s[end--]);
            else i++;
        }
        return s;
    }
};