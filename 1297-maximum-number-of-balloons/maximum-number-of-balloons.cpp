class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>freq;
        for(int i=0; i<text.size(); i++){
            freq[text[i]]++;
        }
        int minfreq=min(freq['b'],freq['a']);
        minfreq=min(minfreq,freq['n']);
        minfreq=min(minfreq,freq['o']/2);
        minfreq=min(minfreq,freq['l']/2);

        return minfreq;




        
    }
};