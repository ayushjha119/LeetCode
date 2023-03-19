class Solution {
public:
    
     void bin(long n,vector<char> &bits)
    {
    long i;
    cout << "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    {
      if((n & i) != 0)
      {
        bits.push_back('1');
      }
      else
      {
        bits.push_back('0');
      }
    }
  }
    
    vector<int> evenOddBit(int n) {
        vector<int> ans;
        vector<char> bits;
        
        bin(n,bits);
        
        int odd=0;
        int even = 0;
        
        
        for(int i=0;i<bits.size();i++){
            
            if(i%2==0 && bits[i]=='1')
                even++;
            
            if(i%2!=0 && bits[i]=='1')
                odd++;
                
        }
        
        ans.push_back(even);
        ans.push_back(odd);
        
        return ans;
        
        
    }
};