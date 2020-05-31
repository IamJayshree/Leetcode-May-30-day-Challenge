class Solution {
public:
    
    int min(vector<double>& distance){
        int n = distance.size();
        double min = 100000;
        int index = 0;
        for(int i = 0; i < n; ++i){
            double x = distance[i];
            if ( x < min){
                min = x;
                index = i;
            }
        }
        distance[index] =  30000;
        return index;
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<double> distance;
        
        
        for(int i=0; i < points.size(); ++i){
            int x1 = points[i][0];
            int y1 = points[i][1];
            double dist = sqrt((x1)*(x1) + (y1)*(y1));
            distance.push_back(dist);
        }
        
        vector<vector<int>> res;
     
        while(K--){
            int index = min(distance);
        
            int x1 = points[index][0];
            int y1 = points[index][1];
           
            vector<int> temp;
            temp.push_back(x1);
            temp.push_back(y1);
            res.push_back(temp);
        }
        
        return res;
    }
};
