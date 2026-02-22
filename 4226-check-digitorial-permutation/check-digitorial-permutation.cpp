class Solution {
public:
    bool isDigitorialPermutation(int n) {
        vector<int>fact={1,1,2,6,24,120,720,5040,40320,362880};
        int sum=0;
        int org=n;
        while(n){
            sum+=fact[n%10];
            n=n/10;
        }
        vector<int>freq(10,0);
        while(sum){
            freq[sum%10]++;
            sum=sum/10;
        }
        while(org){
            freq[org%10]--;
            org=org/10;
        }
        for(int i=0; i<10; i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};