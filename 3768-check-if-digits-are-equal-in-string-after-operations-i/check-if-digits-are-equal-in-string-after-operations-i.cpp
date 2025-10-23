class Solution {
public:
    bool hasSameDigits(string s) {
        int n1=s.size();
        while(n1!=2){
            for(int i=0; i<s.size()-1;i++){
                int n= ((s[i]+s[i+1])-'0')%10;
                s[i]=n+'0';
            }
            n1--;
        }
        if(s[0]==s[1]) return true;
        else return false;
        
    }
};