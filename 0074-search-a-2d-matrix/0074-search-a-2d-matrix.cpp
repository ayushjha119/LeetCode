class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        int i =0;
        int j= n*m-1;
        
        while(i<=j){
            int mid  = (i+j)/2;
            
            int col = mid%m;
            int row = mid/m;
            
            if(matrix[row][col]==target)
                return true;
            else if(matrix[row][col]>target){
                j = mid-1;
            }else{
                i = mid+1;
            }
        }
        
        return false;
    }
};