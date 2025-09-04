class Solution {
public:
    int findClosest(int x, int y, int z) {
        if(abs(x-z)==abs(z-y)) return 0;
        else return abs(x-z)>abs(z-y)?2:1;
        
        
    }
};