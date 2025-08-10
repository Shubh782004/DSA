class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string target=to_string(n);
        sort(target.begin(),target.end());
        unordered_set<string>pow;
        for(int i=1; i<=1e9; i=i<<1){
            string s= to_string(i);
            sort(s.begin(),s.end());
            pow.insert(s);


        }
        return pow.find(target)!=pow.end();
        
    }
};