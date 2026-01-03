class Solution {
public:
    string reversePrefix(string s, int k) {
        if (s.size()==1 || k==1) return s;
        for(int i=0; i<k/2 ; i++){
            char temp= s[i];
            s[i]=s[k-i-1];
            s[k-i-1]=temp;
        }
        return s;
    
        
    }
};