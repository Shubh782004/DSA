class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        int l=0,r=0;
        int max_len=0;
        unordered_map<char,int>mpp;
        int cnt=0;
        while(r<n){
            mpp[s[r]]++;
            while(mpp[s[r]]>1 && l<=r){
                mpp[s[l]]--;
                l++;
                
            }
            
            
            max_len=max(max_len,r-l+1);
            r++;
        }
        return max_len;

        
    }
};