class Solution {
public:
    bool judgeCircle(string moves) {
        pair<int,int>origin={0,0};
        for(int i=0; i<moves.size(); i++){
            if(moves[i]=='R') origin.second++;
            else if(moves[i]=='L') origin.second--;
            else if(moves[i]=='D') origin.first++;
            else origin.first--;
        }
        if(origin.first==0 && origin.second ==0) return true;
        return false;
        
    
    }
};