class Solution {
public:
    bool NotContainsZero(int x){
        while(x){
            if(x%10==0) return false;
            x=x/10;
        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            int j=n-i;
            if(i+j==n){
                if(NotContainsZero(i) && NotContainsZero(j)) return{i,j};
            }
        }
        return{-1,-1};
    }
};