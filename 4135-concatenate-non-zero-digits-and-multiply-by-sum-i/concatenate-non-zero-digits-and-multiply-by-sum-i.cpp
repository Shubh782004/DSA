class Solution {
public:
    long long sumAndMultiply(int n) {
        if(n==0) return 0;
        string num=to_string(n);
        string ans="";
        for (int i=0; i<num.size(); i++){
            if(num[i]!='0') ans+=num[i];
        }
        long long x=1LL* stoi(ans);
        long long sum=0;
        for(int i=0; i<ans.size(); i++){
            sum+=ans[i]-'0';
        }
        long long prod= x*sum;
        return prod;
        
    }
};