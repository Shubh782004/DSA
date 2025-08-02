class Solution {
public:
    bool isSafe(int n, int col, int row, vector<string>&board){
        int dup_row=row;
        int dup_col=col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            row--;
            col--;
        }
        row=dup_row;
        col=dup_col;
        while(row>=0 && col>=0){
            if(board[row][col]=='Q') return false;
            col--;
        }
        row=dup_row;
        col=dup_col;
        while(row<n && col>=0){
            if(board[row][col]=='Q') return false;
            row++;
            col--;
        }
        return true;

    }
    void solve(int n, int col, vector<string>&board, vector<vector<string>>&ans){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0; row<n; row++){
            if(isSafe(n,col,row,board)){
                board[row][col]='Q';
                solve(n,col+1,board,ans);
                board[row][col]='.';
            }
        }

    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        vector<vector<string>>ans;
        string s(n,'.');
        for(int i=0 ; i<n; i++){
            board[i]=s;
        }
        solve(n,0,board,ans);
        return ans;
    }
};