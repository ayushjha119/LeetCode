class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> mpp;
    for(int i=0;i<nums.size();i++){
        mpp[nums[i]]++;
    }
        int maj = 0;
        for(auto it: mpp){
            
            if(it.second>floor(nums.size()/2))
            {
                maj = it.first;
                break;
            }
        }
        
        return maj;
    }
};