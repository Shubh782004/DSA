class Solution {
public:
    int minAllOneMultiple(int k) {
        if(k%2==0 || k%5==0) return -1;
        int x=1;
        for(int i=2; i<=k; i++){
            x=(x*10+1)%k;
            if(x==0) return i;
        }
        return -1;
        
    }
};