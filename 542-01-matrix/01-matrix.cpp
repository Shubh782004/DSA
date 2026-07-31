class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n; i++){
            for(int j=0; j<m; j++){
                if(mat[i][j]==0) q.push({i,j});
                else mat[i][j]=-1;
            }
        }
        vector<int>dc={-1,0,1,0};
        vector<int>dr={0,-1,0,1};

        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
               int  col=dc[i]+c;
               int  row=dr[i]+r;
                if(row>=0 && col>=0 && row<n && col<m && mat[row][col]==-1){
                    mat[row][col]=mat[r][c]+1;
                    q.push({row,col});
                }
            }
        }
        return mat;

        
    }
};