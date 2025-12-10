class Solution {
public:
    long long fact(int n){
        long long factorial=1;
        for(int i=n; i>0; i--){
            factorial=factorial*i%1000000007;
        }
        return factorial;
    }
    int countPermutations(vector<int>& complexity) {
        int n=complexity.size();
        long long ans= fact(n-1);
        for(int i=1; i<complexity.size(); i++ ){
            if(complexity[i]<=complexity[0]) return 0;
        }
        return ans%1000000007;
        
        
    }
};