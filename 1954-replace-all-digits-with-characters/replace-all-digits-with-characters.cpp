class Solution {
public:
    string replaceDigits(string s) {
        for(int i=0; i<s.size(); i++){
            if(i%2){
                s[i]=s[i]+s[i-1]-'0';
            }
        }
        return s;
        
    }
};