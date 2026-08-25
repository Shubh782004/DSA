class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int>mp;
        int l=0,r=0;
        int len=0;
        while(r<s.size()){
            mp[s[r]]++;
            while(mp[s[r]]>1 && l<=r){
                mp[s[l]]--;
                l++;
            }
            
            len=max(len,r-l+1);
            r++;
        }
        return len;
    }
};