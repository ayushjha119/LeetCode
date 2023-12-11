class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();
        int m = n/4;
        int temp = 1;
        if(arr.size()==1)
            return arr[0];
        for(int i = 0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                temp++;

                if(temp>m){
                
                return arr[i];

            }
                
                }
            else
                temp=1;
            
        }
        return arr[n-1];
    }

};