class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int area1=(ax2-ax1)*(ay2-ay1),area2=(bx2-bx1)*(by2-by1);
        if(bx1>=ax2||ax1>=bx2||by1>=ay2||ay1>=by2) return area1+area2;
        vector<int> x={ax1,ax2,bx1,bx2},y={ay1,ay2,by1,by2};
        sort(x.begin(),x.end()),sort(y.begin(),y.end());
        int extra=(x[2]-x[1])*(y[2]-y[1]);
        return area1+area2-extra;
    }
};