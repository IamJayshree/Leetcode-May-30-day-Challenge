//Contributed by prat31

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if(coordinates.size()==2)   return true;
        bool straight = true;
        int check = coordinates[0][0];
        for(int i=1; i<coordinates.size(); i++){
            if(coordinates[i][0]!=check){
                straight=false;
                break;
            }
        }
        if(straight)    return true;
        
        check = coordinates[0][1];
        straight = true;
        for(int i=1; i<coordinates.size(); i++){
            if(coordinates[i][1]!=check){
                straight=false;
                break;
            }
        }
        if(straight)    return true;
        
        float slope = (float)(coordinates[1][1]-coordinates[0][1])/(coordinates[1][0]-coordinates[0][0]);
        for(int i=2; i<coordinates.size(); i++){
            float temp = (float)(coordinates[i][1]-coordinates[0][1])/(coordinates[i][0]-coordinates[0][0]);
            if(temp!=slope) return false;
        }
        return true;
    }
};