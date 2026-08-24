class Solution {
public:
    int rec(int row, int col, int m, int n, vector<vector<int>>& obstacleGrid,vector<vector<int>>&dp){
        if(row==m || col==n) return 0;
        if(row==m-1 && col==n-1) return 1;
        if(obstacleGrid[row][col]==1) return 0;
        if(dp[row][col]!=-1) return dp[row][col];
        int right=rec(row,col+1,m,n,obstacleGrid,dp);
        int down=rec(row+1,col,m,n,obstacleGrid,dp);
        return dp[row][col]=right+down;
    

    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m=obstacleGrid.size();
        int n=obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1]==1) return 0;
        vector<vector<long long>>dp(m,vector<long long>(n,0));
        dp[m-1][n-1]=1;
        for(int row=m-1; row>=0; row--){
            for(int col=n-1; col>=0; col--){
                if(obstacleGrid[row][col]==1){
                    dp[row][col]=0;
                    continue;
                }
                if(row==m-1 && col==n-1) continue;
                long long right=0,down=0;
                if(col+1<n )right=dp[row][col+1];
                if(row+1<m) down=dp[row+1][col];
                dp[row][col]=right+down;
            }

        }
        return dp[0][0];

        
    }
};