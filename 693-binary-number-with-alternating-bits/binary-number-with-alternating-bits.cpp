class Solution {
public:
    bool hasAlternatingBits(int n) {
        int prev=n&1;
        n=n>>1;
        while(n){
            int curr=n&1;
            if(prev==curr) return false;
            n=n>>1;
            prev=curr;
        }
        return true;
        
    }
};