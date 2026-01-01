class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9) {
            digits[n-1]++;
            return digits;
        }
        int cnt9=0;
        for(int i=n-1; i>=0; i--){
            if(digits[i]==9){
                cnt9++;
            }
        }
        if(cnt9==n){
            digits[0]=1;
            for(int i=1;i<n; i++){
                digits[i]=0;
            }
            digits.push_back(0);
            return digits;
        }
        int i=n-2;
        digits[n-1]=0;
        while(i>=0){
            if(digits[i]==9){
                digits[i]=0;
                i--;
            }
            else break;
        }
        digits[i]++;
        
        return digits;
        
            

    }
        
    
};