class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0,r=0;
        vector<int>hash(3,-1);
        int cnt=0;
        while(r<n){
            hash[s[r]-'a']=r;
            cnt+=1+(min(hash[0],min(hash[1],hash[2])));
            
            r++;
        }
        return cnt;

        
    }
};