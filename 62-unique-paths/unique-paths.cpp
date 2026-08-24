class Solution {
public:
    int recursion(int row, int col, int m, int n,vector<vector<int>>&dp){
        if(row==m || col==n) return 0;
        if(row==m-1 && col==n-1){
            return 1;
        }
        if(dp[row][col]!=-1) return dp[row][col];
        
        int right=recursion(row,col+1,m,n,dp);
        int down=recursion(row+1,col,m,n,dp);
        return dp[row][col]=right+down;
         


    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,1));
        // int ans= recursion(0,0,m,n,dp);
        dp[m-1][n-1]=1;
        for(int i=m-2; i>=0; i--){
            for(int j=n-2; j>=0; j--){
                int right=dp[i][j+1];
                int down=dp[i+1][j];
                dp[i][j]=right+down;
            }
        }

        return dp[0][0];

        
    }
};