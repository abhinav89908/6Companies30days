class Solution {
public:    
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
        x1-=xc; x2-=xc; y1-=yc; y2-=yc;
        int xsq = x1*x2>=0?min(x1*x1, x2*x2):0;
        int ysq = y1*y2>=0?min(y1*y1, y2*y2):0;
        return xsq+ysq <= r*r;
    }
};
