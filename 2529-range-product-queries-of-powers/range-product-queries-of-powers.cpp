class Solution {
public:
    vector<int> productQueries(int n, vector<vector<int>>& queries) {
        vector<int>powers;
        for (int i = 0; i < 32; ++i) {
            if ((n >> i) & 1) {
                powers.push_back(1 << i); // 2^i
            }
        }
        
        int mod=1e9+7;
        vector<int>result;
        for(auto &q : queries){
            long long ans=1;
            for(int i=q[0]; i<=q[1] ; i++){
                ans=(ans*powers[i])%mod;
            }
            result.push_back(ans);

        }
        return result;
        
    }
};