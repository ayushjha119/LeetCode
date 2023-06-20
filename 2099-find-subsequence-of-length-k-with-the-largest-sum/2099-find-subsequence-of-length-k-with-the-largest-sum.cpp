class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        
     vector<int> ans(k,0);
        
        priority_queue<pair<int,int>> pq;
        
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
            
        }
        
        for(int i=0;i<k;i++){
            ans[i]=pq.top().second; // storing index in ans;
                pq.pop();
            
        }
        sort(ans.begin(),ans.end()); // index ko sort kr liye
        
        for(int i=0;i<k;i++){
            ans[i] = nums[ans[i]];
        }
        
        return ans;
        
        
    }
};