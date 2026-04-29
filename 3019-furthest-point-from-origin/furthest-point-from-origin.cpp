class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int cnt_L=0;
        int cnt_R=0;
        for(int i=0; i<moves.size(); i++){
            if(moves[i]=='L') cnt_L++;
            else if(moves[i]=='R') cnt_R++;
        }
        if(cnt_L==0 && cnt_R==0) return moves.size();
        int cnt_under= moves.size()-cnt_L-cnt_R;
        if(cnt_L>cnt_R) return cnt_L+cnt_under-cnt_R;
        else return cnt_R+cnt_under-cnt_L;
        
    }
};