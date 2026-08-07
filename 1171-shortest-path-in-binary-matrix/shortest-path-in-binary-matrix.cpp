class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        if(grid[0][0]==1 || grid[n-1][n-1]==1) return -1;
        vector<int>dx={0,0,-1,1,-1,1,-1,1};
        vector<int>dy={-1,1,0,0,-1,1,1,-1};
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        queue<pair<int,pair<int,int>>>q;
        q.push({1,{0,0}});
        dist[0][0]=1;
        while(!q.empty()){
            int x=q.front().second.first;
            int y=q.front().second.second;
            int wt=q.front().first;
            q.pop();
            for(int i=0; i<8;i++){
                int r=x+dx[i];
                int c=y+dy[i];
                if(r>=0 && r<n && c>=0 && c<n && grid[r][c]==0 && dist[r][c]>1+wt){
                    dist[r][c]=wt+1;
                    q.push({dist[r][c],{r,c}});
                }
            }
        }
        return dist[n-1][n-1]==INT_MAX? -1:dist[n-1][n-1];

        
    }
};