class Solution {
public:
    int f(vector<vector<int>>& triangle, int i, int j, int m,vector<vector<int>>&dp){
        if(i==m-1) return triangle[m-1][j];
        if(dp[i][j]!=-1) return dp[i][j];
        int d=f(triangle,i+1,j,m,dp)+ triangle[i][j];
        int dr=f(triangle,i+1,j+1,m,dp)+ triangle[i][j];
        return dp[i][j]=min(d,dr);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int m=triangle.size();
        vector<vector<int>>dp(m,vector<int>(m,0));
        for(int j=0; j<m ; j++) dp[m-1][j]=triangle[m-1][j];
        for(int i=m-2; i>=0; i--){
            for(int j=i; j>=0; j--){
                int d=dp[i+1][j]+triangle[i][j];
                int dr=dp[i+1][j+1]+ triangle[i][j];
                dp[i][j]=min(d,dr);
            }
        }
        return dp[0][0];
        

        
    }
};