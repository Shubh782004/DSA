class Solution {
public:
    int countValidPrefixes(string s) {
        int cnt_0=0,cnt_1=0;
        int ans=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]=='0') cnt_0++;
            else cnt_1++;
            if(abs(cnt_0-cnt_1)<=1) ans++;
        }
        return ans;

    }
};