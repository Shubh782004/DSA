class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.size();
        int l=0;
        int len=0;
        unordered_map<char,int>mpp;
        for(int r=0; r<n ;r++){
            mpp[s[r]]++;
            while(mpp[s[r]]>2 && l<n){
                mpp[s[l]]--;
                l++;
                
            }
            len=max(len,r-l+1);

        }
        return len;
        
    }
};