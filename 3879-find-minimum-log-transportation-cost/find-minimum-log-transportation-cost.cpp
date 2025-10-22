class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost=0;
        if(k<n){
            cost+=(long long)(n-k)*k;
        }
        else if(k<m){
            cost+=(long long)(m-k)*k;
        }

        return cost;
        
    }
};