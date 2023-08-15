class Solution {
public:
    
    int partition(vector<int> &nums,int l,int r){
        int P  = nums[l];
        int i = l+1;
        int j = r;
        
        while(i<=j){
            if(nums[i]<P && nums[j]>P){
                swap(nums[i],nums[j]);
                 i++;
                j--;
                }      
            if(nums[i]>=P)
                i++;
            if(nums[j]<=P)
                j--;
        }
        swap(nums[j],nums[l]);
        return j;
    }
    
    
   int findKthLargest(vector<int>& nums, int k) {
       
       int n = nums.size();
       // if(n==1 && k==1)
       //     return nums[0];
       int  L = 0;
       int R = n-1;
       
       int pivot = 0;
       
       while(1){
           pivot = partition(nums,L,R);
           if(pivot==k-1)
               break;
           else if(pivot>k-1)
               R  = pivot-1;
           else
               L  = pivot+1;
           
       }
       
       return nums[pivot];
    }
};