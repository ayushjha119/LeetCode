class Solution {
public:
    int findLeastNumOfUniqueInts(vector<int>& arr, int k) {
        unordered_map<int, int> freq;
        for (auto i : arr) {
            freq[i]++;
        }
        vector<int> fvect;

        for(auto p : freq)
            fvect.push_back(p.second);
            sort(fvect.begin(), fvect.end());
            int ele = 0;

            for(int i = 0;i<fvect.size();i++){
                ele += fvect[i];
                if(ele>k)
                return fvect.size()-i;
            }
            return 0;
        
        

    }
};