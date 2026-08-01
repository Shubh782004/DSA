class Solution {
public:
    long long maximumValue(long long n, long long s, long long m) {
        if(n==1) return s;
        if(n%2) return s+((m-1)*(n-1)/2)+1;
        else return s+((n/2)*m)-((n/2)-1);
    }
};