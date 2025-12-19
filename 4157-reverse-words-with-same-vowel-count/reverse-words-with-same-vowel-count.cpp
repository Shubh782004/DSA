class Solution {
public:
    string reverseWords(string s) {
        int ind=0;
        int cnt_vow_org=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==' ') {
                ind=i;
                break;
            }
            else{
                if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'|| s[i]=='u') cnt_vow_org++;
            } 
            if(i==s.size()-1 && s[i]!=' ') return s;
        }
        ind++;
        int cnt_vow=0;
        for(int i=ind; i<s.size(); i++){
            if(s[i]!=' '){
                if(s[i]=='a'|| s[i]=='e'||s[i]=='i'|| s[i]=='o'|| s[i]=='u') cnt_vow++;
            }
            else{
                if(cnt_vow==cnt_vow_org){
                    reverse(s.begin()+ind, s.begin()+i);
                }
                cnt_vow=0;
                ind=i+1;
            }
        }
        if(cnt_vow==cnt_vow_org){
            reverse(s.begin()+ind, s.end());
        }
        return s;





        
    }
};