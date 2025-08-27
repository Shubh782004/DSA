class Solution {
public:
    long long countSubstrings(string s, char c) {
        int cnt=0;
        for(int i=0; i<s.size(); i++){
            if(s[i]==c) cnt++;
        }
        return (long long )cnt*(cnt+1)/2;
        
    }
};