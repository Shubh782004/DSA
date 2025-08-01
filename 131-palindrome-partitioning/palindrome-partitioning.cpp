class Solution {
public:
    bool isPalindrome(string s, int start, int end){
        while(end>start){
            if(s[end]!=s[start]) return false;
            end--;
            start++;
        }
        return true;
    }

    void solve(string &s , vector<string>&temp, vector<vector<string>>&ans, int ind){
        if(ind == s.size()){
            ans.push_back(temp);
            return;
        }
        for(int i=ind; i<s.size(); i++){
            if(isPalindrome(s,ind,i)){
                temp.push_back(s.substr(ind,i-ind+1));
                solve(s,temp,ans,i+1);
                temp.pop_back();
            }
        }
    }


    vector<vector<string>> partition(string s) {
        vector<string>temp;
        vector<vector<string>>ans;
        solve(s,temp,ans,0);
        return ans;
        
    }
};