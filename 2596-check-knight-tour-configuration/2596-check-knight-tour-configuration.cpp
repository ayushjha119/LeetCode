class Solution {
public:
    bool checkValidGrid(vector<vector<int>>& grid) {
        
        // let us define the direction in which knight can travel
        
        int dir[8][2] = {{1,-2},{2,-1},{2,1},{1,2},{-1,2},{-2,1},{-2,-1},{-1,-2}};
        
         int count =0, maxCount = grid.size()*grid.size()-1;
        
        int x = 0,y = 0, i ,j;
        
        if(grid[x][y]!=count) return false;
        
        while(count<maxCount){
            //count ko 1 increse kiye aur 0  sey 1 ho gya aur 
            //phir harr direction mai  check kiye ki  1 kaha kaha ho skta hai 
            
            count++;
            int flag  =1;
            for(auto d : dir)
            {
                i = x+d[0];
                j = y+d[1];
                
                if(i>=0 && j>=0 && i<grid.size() && j<grid.size() && grid[i][j]==count){
                    x= i;y=j;flag=0;break;
                }
            }
            
            // kisi ek ko v place nahi kar paye toh wahi return false aur exit
            if(flag)
                return false;
            
        }
        
        return true;
        
    }
};