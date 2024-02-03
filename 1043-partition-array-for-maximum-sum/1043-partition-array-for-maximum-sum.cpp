class Solution {
public:
    int n,k;
    vector<int> dp;
    int solve(int id, vector<int> &arr){
        if(id>=n)
            return 0;
        if(dp[id]!=-1)
            return dp[id];
        int maxVal = 0, ans = 0;
        for(int j=id;j<min(n,id+k);j++){
            maxVal = max(maxVal, arr[j]);
            ans = max(ans,(j-id+1) * maxVal + solve(j+1,arr));
        }
        return dp[id] = ans;
    }
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
         n = arr.size();
         this->k = k;
         dp = vector<int> (n,-1);
         return solve(0,arr);
    }
};