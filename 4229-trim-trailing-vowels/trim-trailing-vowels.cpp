class Solution {
public:
    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u') return true;
        return false;
    }
    string trimTrailingVowels(string s) {
        string ans="";
        for(int i=s.size()-1; i>=0; i--){
            if(isVowel(s[i])) continue;
            else {
                ans=s.substr(0,i+1);
                break;
            }

        }
        return ans;

        
    }
};