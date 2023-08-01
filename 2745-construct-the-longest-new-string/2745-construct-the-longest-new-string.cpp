class Solution {
public:
    int longestString(int x, int y, int z) {
       
        
        int n = min(x,y);
        int m = min(x,y)+1;
        if(x==y)
            m--;
        int total = 2*n+2*m+2*z;
        return total;
    }
};