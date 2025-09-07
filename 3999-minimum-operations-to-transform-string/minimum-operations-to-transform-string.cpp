class Solution {
public:
    int minOperations(string s) {
        int ans=0; int diff;
        for(int i=0 ; i<s.size(); i++){
            diff=(26-(s[i]-'a'))%26;
            ans=max(ans,diff);
        }
        return ans;

        
    }
};