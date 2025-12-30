class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1= 1LL*cost1*need1 + 1LL*cost2* need2;
        long long c2= 1LL*max(need1,need2)*costBoth;
        long long c3;
        if (need1>need2){
            c3=1LL*need2*costBoth + 1LL*(need1-need2)*cost1;
        }
        else c3=1LL*need1*costBoth +1LL*(need2-need1)*cost2;
        
        if(c1>=c2) return min(c2,c3);
        else if(c2>c1) return min(c1,c3);
        else if(c3>=c1) return min(c1,c2);
        else return c3;

        
    }
};