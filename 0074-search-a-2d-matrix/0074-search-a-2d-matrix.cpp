class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m = matrix.size();
        int n= matrix[0].size();
        
        int i = 0;
        int j= (m*n)-1;
        
        while(i<=j){
            int mid  = (i+j)/2;
            
            // int col = mid%n;
            // int row = mid/n;
            
            if(matrix[mid/n][mid%n]==target)
                return true;
            else if(matrix[mid/n][mid%n]<target){
                i = mid+1;
            }else{
                j = mid-1;
            }
        }
        
        return false;
    }
};