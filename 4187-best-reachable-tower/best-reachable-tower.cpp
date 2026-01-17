class Solution {
public:
    vector<int> bestTower(vector<vector<int>>& towers, vector<int>& center, int radius) {
        int q=-1;
        int x=-1,y=-1;
        for(int i=0; i<towers.size(); i++){
            if((abs(towers[i][0]-center[0])+abs(towers[i][1]-center[1]))<=radius){
                if(towers[i][2]>q){
                    q=towers[i][2];
                    x=towers[i][0];
                    y=towers[i][1];
                }
                else if(towers[i][2]==q){
                    if(x==towers[i][0]) y=min(y,towers[i][1]);
                    else if(x>towers[i][0]) {
                        x=towers[i][0];
                        y=towers[i][1];
                    }

                    
                    
                }
            }
        }
        if(x==-1 || y==-1) return {-1,-1};
        else return {x,y};
        
    }
};