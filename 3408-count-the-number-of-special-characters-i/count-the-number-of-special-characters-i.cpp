class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>hash(60,0);
        for(int i=0; i<word.size(); i++ ){
            hash[word[i]-'A']++;
        }
        int cnt=0;
        for(int j=0; j<27;j++){
            if(hash[j]!=0 && hash[j+32]!=0) cnt++;
        }
        return cnt;

        
    }
};