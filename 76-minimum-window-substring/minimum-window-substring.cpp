class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int>mpp;
        string res="";
        for(int i=0; i<t.size(); i++) mpp[t[i]]++;
        int l=0,r=0;
        int min_len= INT_MAX;
        int cnt=0;
        int sInd=-1;
        while(r<s.size()){
            if(mpp[s[r]]>0) cnt++;
            mpp[s[r]]--;
            while(cnt==t.size()){
                if(r-l+1<min_len){
                    min_len=r-l+1;
                    sInd=l;
                }
                mpp[s[l]]++;
                if(mpp[s[l]]>0) cnt--;
                l++;
            }
            r++;

        }

        return sInd==-1?"":s.substr(sInd,min_len);
        
    }
};