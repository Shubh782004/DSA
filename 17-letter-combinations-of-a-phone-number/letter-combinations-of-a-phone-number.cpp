class Solution {
public:
    void backtrack(string & digits, string&current, vector<string>&result,int ind, unordered_map<char,string>&mpp){
        if(digits.size()==current.size()){
            result.push_back(current);
            return;
        }
        for(char c : mpp[digits[ind]] ){
            current.push_back(c);
            backtrack(digits, current , result, ind+1, mpp);
            current.pop_back();

        }



    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return {};
        unordered_map<char,string>mpp={
            {'2',"abc"},
            {'3',"def"},
            {'4',"ghi"},
            {'5',"jkl"},
            {'6',"mno"},
            {'7',"pqrs"},
            {'8',"tuv"},
            {'9',"wxyz"}
        };
        string current;
        vector<string>result;
        backtrack(digits,current,result,0,mpp);
        return result;
        

        
    }
};