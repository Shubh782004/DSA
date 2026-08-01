class Solution {
public:
    void dfs(vector<vector<char>>& grid, int n, int m, int r , int c){
        if(r<0 || r==n || c<0 || c==m || grid[r][c]=='0') return ;
        grid[r][c]='0';
        dfs(grid,n,m,r-1,c);
        dfs(grid,n,m,r+1,c);
        dfs(grid,n,m,r,c+1);
        dfs(grid,n,m,r,c-1);

    }
    int numIslands(vector<vector<char>>& grid) {
        int n= grid.size();
        int m= grid[0].size();
        int res=0;
        for(int i=0; i<n ;i++){
            for(int j=0; j<m ;j++){
                if(grid[i][j]=='1'){
                    res++;
                    dfs(grid,n,m,i,j);
                } 
            }
        }
        return res;

    }
};