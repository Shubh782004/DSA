class Solution {
public:
    int maxOperations(string s) {
        vector<int>pre_sum(s.size(),0);
        pre_sum[0]= s[0]-'0';
        for(int i=1; i<s.size(); i++){
            pre_sum[i]=pre_sum[i-1]+ s[i]-'0';
        }
        int ans=0;
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='1' && s[i+1]=='0'){
                ans+=pre_sum[i];
            }
        }
        return ans;
        
    }
};