class Solution {
public:
    bool isvalid(vector<vector<char>>& board, string word, int ind, int row,int col){
        int n=board.size();
        int m=board[0].size();
        if(row>n-1 || col>m-1 || row<0 || col<0 || board[row][col]!=word[ind] || board[row][col]=='*') return false;
        if(ind == word.size()-1) return true;
        char c=board[row][col];
        board[row][col]='*';

        bool res=(isvalid(board,word,ind+1,row,col+1) || isvalid(board,word,ind+1,row,col-1) || isvalid(board,word,ind+1,row+1,col) || isvalid(board,word,ind+1,row-1,col));
        board[row][col]=c;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m=board[0].size();
        for(int row=0; row<n; row++){
            for(int col=0; col<m;col++){
                if(board[row][col]==word[0] && isvalid(board,word,0,row,col)) return true;
            }
        }
        return false;

        
    }
};