class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true){
            int prod=1;
            int org=n;
            while(n){
                int dig= n%10;
                n=n/10;
                prod*=dig;
            }
            if(prod%t==0) return org;
            n=org+1;
            
        }
        return n;
    }
};