class Solution {
public:
    int findValueOfPartition(vector<int>& nums) {
        
        int n = nums.size();
        int minm= 1e9;
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            
                minm=min(minm,abs(nums[i-1]-nums[i]));
                
            
        }
        
        return minm;
    }
};