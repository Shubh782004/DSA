class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans="";
        for(int i=0; i<words.size(); i++){
            int s=0;
            char c;
            for(int j=0; j<words[i].size(); j++){
                s+=weights[words[i][j]-'a'];
            }
            c='z'-(s%26);
            ans+=c;
            
        }
        return ans;
        
    }
};