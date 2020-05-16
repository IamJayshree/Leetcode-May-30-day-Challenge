class Solution {
public:
    int max(int a,int b){
        return (a>b)?a:b;
    }
    
    int kadane(vector<int>& A){
        int sofar = A[0];
        int curval = A[0];
        
        for(int i = 1; i < A.size(); ++i){
            curval = max(A[i],curval + A[i]);
            sofar = max(sofar,curval);
        }
        return sofar;
    }
    
    int maxSubarraySumCircular(vector<int>& A) {
        int k = kadane(A);
        int cs = 0;
        for(int i = 0;i<A.size();++i){
            cs += A[i];
        }
         for(int i = 0;i<A.size();++i){
             A[i] *= -1;
         }
        int negK = kadane(A);
        cs = cs + negK;
        
        if(cs > k && cs != 0)
            return cs;
        else
            return k;
        
        return k;
        
        
    }
};
