class Solution {
public:
    int countBits(int num){
        int cnt=0;
        while(num){
            if(num&1) cnt++;
            num=num>>1;
        }
        return cnt;
    }
    int countPrimeSetBits(int left, int right) {
        int ans=0;
        unordered_set<int>primes={2, 3, 5, 7, 11, 13, 17, 19};
        for(int i= left ; i<=right; i++){
            if(primes.find(countBits(i))!=primes.end()) ans++;
        }
        return ans;
        
    }
};