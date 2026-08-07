class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int n=heights.size();
        int m= heights[0].size();
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        vector<vector<int>>dist(n,vector<int>(m,INT_MAX));
        dist[0][0]=0;
        pq.push({0,{0,0}});
        vector<int>dr={-1,0,1,0};
        vector<int>dc={0,-1,0,1};
        while(!pq.empty()){
            int r=pq.top().second.first;
            int c=pq.top().second.second;
            int dif=pq.top().first;
            pq.pop();
            for(int i=0; i<4; i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row<n && row>=0 && col<m && col>=0){
                    int diff= max(dif,abs(heights[r][c]-heights[row][col]));
                    if(dist[row][col]>diff){
                        dist[row][col]=diff;
                        pq.push({diff,{row,col}});
                    }
                }
            }
        }
        return dist[n-1][m-1];

        
    }
};