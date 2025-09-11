class Solution {
public:
    bool isVowel(char c){
        unordered_set<char>st={'a','e','i','o','u','A','E','I','O','U'};
        if (st.find(c)!=st.end()) return true;
        return false;
    }
    string sortVowels(string s) {
        int n=s.size();
        map<char,int>mpp;
        for(int i=0; i<n ; i++){
            if(isVowel(s[i])) {
                mpp[s[i]]++;
            }
        }
        string ans="";
        for(int i=0; i<n; i++){
            if(!isVowel(s[i])) ans+=s[i];
            else{
                for(auto &it:mpp){
                    if(it.second!=0) {
                        ans+=it.first;
                        it.second--;
                        break;
                    }
                }
            }
        }
        return ans;

        
        
    }
};