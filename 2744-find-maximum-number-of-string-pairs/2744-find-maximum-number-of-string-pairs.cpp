class Solution {
public:
    int maximumNumberOfStringPairs(vector<string>& words) {
        
        int n = words.size();
        int count=0;
        for(int i=0;i<n;i++){
            
            string str = words[i];
            reverse(str.begin(), str.end());
            for(int j=i+1;j<n;j++){
                if(str==words[j])
                    count++;
            }
        }
        
        return count;
    }
};