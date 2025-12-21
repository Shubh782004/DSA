class Solution {
public:
    long long minCost(string s, vector<int>& cost) {
        long long sum=0;
        vector<long long>hash(26,0);
        int n=s.size();
        for(int i=0; i<n;i++){
            hash[s[i]-'a']+=cost[i];
            sum+=cost[i];
        }
        long long sum_ch= 0;
        for(int i=0; i<26; i++){
            sum_ch=max(sum_ch,hash[i]);
        }
        return sum-sum_ch;
        
        
        
        
        
    }
};