class Solution {
public:
    int N,GOAL,K;
    int MOD  = 1e9+7;
    int t[101][101];
    long solve(int count_song,int count_unique){
        if(count_song == GOAL){
            if(count_unique==N)
                return t[count_song][count_unique]=1;
            return t[count_song][count_unique] = 0;
        }
        if(t[count_song][count_unique]!=-1)
            return t[count_song][count_unique];
        
        long res = 0;
        
        //OPtion -1 (play unique song)
        if(N>count_unique)
        res +=(N-count_unique)*solve(count_song+1,count_unique+1);
        
        //option-2 replay a song
        if(count_unique>K)
        res+=(count_unique-K)*solve(count_song+1,count_unique);
        
        return t[count_song][count_unique] = res%MOD;
        
    }
    
    int numMusicPlaylists(int n, int goal, int k) {
        
        N = n;
        GOAL = goal;
        K = k;
        memset(t,-1,sizeof(t));
        
        return solve(0,0);
    }
};