class Solution {
public:
    int nthUglyNumber(int n) {
         vector<int> t(n+1);

        int i2 ,i3,i5;
        i2= i3= i5 = 1;
        t[1]=1;
        int x,y,z;
        x=y=z=1;
        for(int i=2;i<=n;i++){
            
            int i2u = t[i2]*2;
            int i3u = t[i3]*3;
            int i5u = t[i5]*5;

            t[i] = min({i2u,i3u,i5u});
            if(t[i]==i2u)
                i2++;
            if(t[i]==i3u)
                i3++;
             if(t[i]==i5u)
                i5++;
        }

        return t[n];
    }
};