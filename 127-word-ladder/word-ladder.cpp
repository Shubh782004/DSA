class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>st(wordList.begin(),wordList.end());
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        while(!q.empty()){
            string newWord= q.front().first;
            int ans=q.front().second;
            q.pop();
            if(newWord==endWord) return ans;
            for(int i=0; i<newWord.size(); i++){
                char org=newWord[i];
                for(char ch='a'; ch<='z'; ch++){
                    newWord[i]=ch;
                    if(st.find(newWord)!=st.end()){
                        q.push({newWord,ans+1});
                        st.erase(newWord);
                    }
                }
                newWord[i]=org;
            }

        }
        return 0;
        
    }
};