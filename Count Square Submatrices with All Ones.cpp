class Solution {
public:
    int min(int a, int b, int c){
        if(a <= b && a <= c)
            return a;
        if(b <= a && b <= c)
            return b;
        if(c <= a && c <= b)
            return c;
        return 0;
    }
    
    int countSquares(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int column = matrix[0].size();
        int resMat[row+1][column+1];
        
        for(int i = 0; i <=row; ++i){
            for(int j = 0;j <=column; ++j){
                resMat[i][j] = 0;
            }
        }
    
        for(int i = 1; i <=row; ++i){
            for(int j = 1;j <=column; ++j){
                if(matrix[i-1][j-1] != 0)
                    resMat[i][j] = min(resMat[i-1][j-1], resMat[i-1][j], resMat[i][j-1]) + 1;
            }
        }
    
       int sum = 0;
            
       for(int i = 1; i <=row; ++i)
            for(int j = 1;j <=column; ++j)
                sum += resMat[i][j];
    
        return sum;
        }
        
};
