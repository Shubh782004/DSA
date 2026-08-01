class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
       queue<pair<int,int>>q;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0; i<n; i++){
            if(grid[i][0]==1) {
                q.push({i,0});
                grid[i][0]=-1;
            }
            if(grid[i][m-1]==1){
                q.push({i,m-1});
                grid[i][m-1]=-1;
            }
        }
        for(int j=0; j<m; j++){
            if(grid[0][j]==1) {
                q.push({0,j});
                grid[0][j]=-1;
            }
            if(grid[n-1][j]==1){
                q.push({n-1,j});
                grid[n-1][j]=-1;
            }
        }
        vector<int>dc={-1,0,1,0};
        vector<int>dr={0,-1,0,1};
        while(!q.empty()){
            int r= q.front().first;
            int c= q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int row=r+dr[i];
                int col= c+dc[i];
                if(row>=0 && row<n && col >=0 && col<m && grid[row][col]==1){
                    grid[row][col]=-1;
                    q.push({row,col});
                }
            } 
        }
        int cnt=0;
        for(int i=0; i<n ;i++){
            for(int j=0; j<m ;j++){
                
                if(grid[i][j]==1) cnt++;
            }
        }
        return cnt;


        
    }
};