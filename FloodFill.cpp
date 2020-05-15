class Solution {
public:
    
     void fillcolor(vector<vector<int>>& image,int sr,int sc,int newcolor,int oldcolor){
            
            if(sr < 0 || sr >= image.size() || sc < 0 || sc >=image[0].size())
                return;
            
            if(image[sr][sc] != oldcolor)
                return;
         
             if(image[sr][sc] == newcolor)
                return;
         
            image[sr][sc] = newcolor;
            
            fillcolor(image,sr + 1,sc,newcolor,oldcolor);
            fillcolor(image,sr - 1,sc,newcolor,oldcolor);
            fillcolor(image,sr,sc + 1,newcolor,oldcolor);
            fillcolor(image,sr,sc - 1,newcolor,oldcolor);
        }
    
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
         
        int oldColor = image[sr][sc];
        fillcolor(image,sr,sc,newColor,oldColor);
        
        return image;
    }
};
