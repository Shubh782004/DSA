class Solution {
public:
    bool canReach(vector<int>& start, vector<int>& target) {
        if((((target[0]+target[1])-(start[0]+start[1]))%2)==0) return true; 
        else return false;
        
    }
};