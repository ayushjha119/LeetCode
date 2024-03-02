class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        int l = 0, r = n-1;
        int x = n-1;
        
        while(r>=l){
            if(abs(nums[l])>abs(nums[r]))
            {
                 ans[x]=(nums[l]*nums[l]);
                l++;
                x--;
            }else{
                ans[x]=(nums[r]*nums[r]);
                r--;
                x--;
            }
        }
        return ans;
    }
};