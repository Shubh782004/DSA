class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign=true;
        
        if(dividend>=0 && divisor<0 || dividend<=0 && divisor>0) sign=false;
        if (dividend == INT_MIN && abs((long)divisor)==1) return sign?INT_MAX: INT_MIN;
    
        long  n = abs((long)dividend);;
        long d = abs((long)divisor);
        
        if(n==d) return sign? 1:-1 ;
        long ans=0;
        while(n>=d){
            long cnt=0;
            while (n >= (d << (cnt + 1))) cnt++;
            ans+=1<<cnt;
            n-=d<<(cnt);
        }
        if(ans>=INT_MAX && sign==true) return INT_MAX;
        if(ans>INT_MAX && sign==false) return INT_MIN;
        return sign?ans:(-1*ans);
        

        
    }
};