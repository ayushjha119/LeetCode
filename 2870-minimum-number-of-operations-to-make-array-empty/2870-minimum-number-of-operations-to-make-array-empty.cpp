class Solution {
public:
    int minOperations(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num: nums)
            mp[num]++;
        int ans = 0;
        for(auto [el, cnt]: mp){
            if(cnt==1)
                return -1;
            ans += cnt/3 + (cnt%3 > 0);

        }
        return ans;
    }
};