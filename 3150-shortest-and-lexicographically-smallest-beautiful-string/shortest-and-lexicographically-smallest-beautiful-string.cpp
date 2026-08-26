class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int l=0,r=0,cnt_1=0;
        string ans="";
        while(r<s.size()){
            if(s[r]=='1') cnt_1++;
            while(cnt_1>k){
                if(s[l]=='1') cnt_1--;
                l++;
            }
            if(cnt_1==k){
                while(s[l]=='0' && l<=r) l++; 
                string cur=s.substr(l,r-l+1);
                if(ans=="" || cur.size()<ans.size() || (cur.size()==ans.size() && cur<ans)) ans=cur;

            }
            r++;
        }
        return ans;
    }
};