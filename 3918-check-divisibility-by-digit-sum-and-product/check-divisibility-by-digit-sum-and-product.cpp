class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0;
        int prod=1;
        int org=n;
        while(org){
            sum+=org%10;
            prod*=org%10;
            org/=10;
        }
        if(n%(sum+prod)==0) return true;
        return false;
        
    }
};