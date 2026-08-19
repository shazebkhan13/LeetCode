class Solution {
public:
    bool judgeSquareSum(int c) {
        int start=0,end=sqrt(c);
        while(start<=end){
            int a=start*start,b=end*end;
            if(a==c-b) return true;
            else if(b>c-a) end--;
            else start++;
        }
        return false;
    }
};