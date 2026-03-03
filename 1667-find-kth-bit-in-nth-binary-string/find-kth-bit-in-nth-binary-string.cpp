class Solution {
public:
    char findKthBit(int n, int k) {
        vector<string>str(n);
        str[0]="0";
        for(int i=1; i<n; i++){
            string temp=str[i-1];
            reverse(temp.begin(),temp.end());
            for(char &c: temp){
                if(c=='0') c='1';
                else c='0';
            }
            str[i]=str[i-1]+"1"+temp;
            
            
        }
        return str[n-1][k-1];
        
    }
};