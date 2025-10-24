class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mpp;
        for(int i=0; i<s.size();i++){
            mpp[s[i]]++;
        }
        int max_odd=0;
        int min_even=INT_MAX;

        for(auto it:mpp){
            if(it.second%2==0 && it.second<min_even) min_even=it.second;
            else if(it.second%2==1 && it.second>max_odd) max_odd=it.second;
        }
        return max_odd-min_even;
    }
};