class Solution {
public:
    int distanceTraveled(int mainTank, int additionalTank) {
        
        if(mainTank<5){
            return mainTank*10;
        }
        else{
            int t = 0;
            
            while(mainTank>=5){
                
                mainTank = mainTank-5;
                
                t += 5*10;
        
                if(additionalTank>0){
                    additionalTank--;
                    mainTank++;
                    
                }
            }
            if(mainTank<5)
                t+=mainTank*10;
            return t;
        }
        
    }
};