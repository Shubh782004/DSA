class Solution {
public:
    bool scoreBalance(string s) {
        vector<int>prefixSum(s.size());
        prefixSum[0]=s[0]-'a'+1;
        for(int i=1; i<s.size(); i++){
            int n=s[i]-'a'+1;
            prefixSum[i]=prefixSum[i-1]+n;
        }
        int p=prefixSum.size();
        
        for(int i=0; i<p; i++){
            if(prefixSum[i]==(prefixSum[p-1]-prefixSum[i])) return true;
        }
        return false;
        
    }
};