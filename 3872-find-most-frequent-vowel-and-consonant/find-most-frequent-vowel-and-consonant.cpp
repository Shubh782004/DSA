class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>freq;
        for(int i=0 ; i<s.size(); i++){
            freq[s[i]]++;
        }
        int vowel_freq=0, consonant_freq=0;
        for(auto it:freq){
            if(it.first=='a' || it.first=='e' ||it.first=='i' ||it.first=='o' ||it.first=='u'){
                vowel_freq=max(vowel_freq,it.second);
            }
            else{
                consonant_freq=max(consonant_freq,it.second);
            }
        }
        return vowel_freq+consonant_freq;
        
    }
};