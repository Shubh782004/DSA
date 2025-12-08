class Solution {
public:
    int countTriples(int n) {
        double c=0.0;
        int d=0;
        int cnt=0;
        for(int a=1; a<n+1; a++){
            for(int b=1; b<n+1; b++){
                c=sqrt(a*a + b*b);
                d=sqrt(a*a+b*b);
                if(c<=n && c-d==0.00000) cnt++;
            }
        }
        return cnt;

        
    }
};