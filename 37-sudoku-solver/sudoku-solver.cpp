class Solution {
public:
    bool isSafe(vector<vector<char>>&board, int col, int row,char c){
        for(int i=0; i<9; i++){
            if(board[row][i]==c || board[i][col]==c ||board[3*(row/3)+i/3][3*(col/3)+i%3]==c ) return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board,int row){
        if(row==board.size()) return true;
        for(int col=0; col<board[0].size(); col++){
            if(board[row][col]=='.'){
                for(char c='1'; c<='9'; c++){
                    if (isSafe(board,col,row,c)){
                        board[row][col]=c;
                        if(solve(board,row)) return true;
                        else board[row][col]='.';
                    }
                }
                return false;
            }
        }
        
        return solve(board,row+1);

    }
    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0);
        
        
    }
};