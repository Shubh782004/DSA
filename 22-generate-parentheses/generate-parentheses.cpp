class Solution {
public:
    void solve(int n, string current, vector<string>&result, int open, int close){
        if(open ==n && close==n){
            result.push_back(current);
            return;
        }
        if(open<n){
            solve(n, current+"(", result,open+1,close);
        }
        if(close<open){
            solve(n, current+")", result, open,close+1);
        }

    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        solve(n,"", result,0,0);
        return result;

    }
};