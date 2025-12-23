class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size(),m=haystack.size();
        if(n>m) return -1;
        for(int i=0; i<=m-n; i++){
            if(needle==haystack.substr(i,n)){
                return i;
            }
        }
        return -1;

        
    }
};