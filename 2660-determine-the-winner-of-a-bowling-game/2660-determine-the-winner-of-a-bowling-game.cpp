class Solution {
public:
    int score(vector<int>& player){
        int s = 0, f = 0;
        for(auto p:player){
            s += (f > 0)? 2*p: p;
            f--;
            if(p == 10) f = 2;
        }
        return s;
    }
    
    int isWinner(vector<int>& player1, vector<int>& player2) {

        // cout<<score(player1)<<endl;
        // cout<<score(player2)<<endl;
        if(score(player1)>score(player2))
            return 1;
        else if(score(player1)<score(player2))
            return 2;
        else
            return 0;
        
            
    }
};