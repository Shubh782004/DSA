class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n=grid.size();
        priority_queue<pair<int,pair<int,int>>,
        vector<pair<int,pair<int,int>>>,
        greater<pair<int,pair<int,int>>>>pq;

        vector<vector<int>>vis(n,vector<int>(n,0));
        pq.push({grid[0][0],{0,0}});
        vis[0][0]=1;
       
        int ans=0;
        while(!pq.empty()){
            int node= pq.top().first;
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            pq.pop();
            ans=max(ans,node);
            if(r==n-1 && c==n-1) return ans;
            vector<int>dr={-1,0,1,0};
            vector<int>dc={0,-1,0,1};
            for(int i=0; i<4 ; i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row>=0 && row<n && col>=0 && col<n && !vis[row][col] ){
                    vis[row][col]=1;
                    pq.push({grid[row][col],{row,col}});

                    



                }

            }


        }
        return -1;
        

        
        
    }
};