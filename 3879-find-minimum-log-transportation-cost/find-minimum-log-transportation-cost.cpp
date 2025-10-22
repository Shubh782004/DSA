class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost=0;
        if(k<n && k>=m){
            cost+=(long long)(n-k)*k;
        }
        else if(k<m && k>=n){
            cost+=(long long)(m-k)*k;
        }
        else if(k>=m && k>=n) return 0;
        return cost;
        
    }
};