class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int l=0,r=0;
        int maxlen=0;
        int maxfreq=0;
        unordered_map<int,int>freq;
        while(r<n){
            freq[s[r]]++;
            maxfreq=max(maxfreq,freq[s[r]]);
            if((r-l+1-maxfreq)>k){
                freq[s[l]]--;
                l++;
            }
            maxlen=max(maxlen,r-l+1);
            r++;
        }
        return maxlen;
    }
};