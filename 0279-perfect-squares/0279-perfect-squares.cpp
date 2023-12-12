class Solution {
public:
    int t[100001];
    int helper(int n){
        int ans = INT_MAX;
        if(n==0)
            return 0;
        if(t[n]!=-1)
            return t[n];
        for(int i=1;i*i<=n;i++){
            int temp = 1+helper(n-i*i);
            ans = min(ans,temp);
        }

        return t[n] = ans;
    }

    int numSquares(int n) {
        memset(t,-1,sizeof(t));
        return helper(n);
    }
};