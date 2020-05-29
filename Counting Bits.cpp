class Solution {
public:
    
    int countSetBits(int n) 
    { 
    if (n == 0) 
        return 0; 
    else
        return (n & 1) + countSetBits(n >> 1); 
    } 
    
    vector<int> countBits(int num) {
        vector<int> setbits;
        
        for(int i = 0; i <= num; ++i){
            int res = countSetBits(i); 
            setbits.push_back(res);
        }
        
        return setbits;
    }
};
