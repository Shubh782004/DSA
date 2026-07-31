class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n=image.size();
        int m=image[0].size();
        if(image[sr][sc]==color) return image;
        int org=image[sr][sc];
        queue<pair<int,int>>q;
        image[sr][sc]=color;
        q.push({sr,sc});
        vector<int>dr={-1,0,1,0};
        vector<int>dc={0,-1,0,1};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(int i=0; i<4; i++){
                int row=r+dr[i];
                int col=c+dc[i];
                if(row<n && row>=0 && col<m && col>=0 && image[row][col]==org){
                    image[row][col]=color;
                    q.push({row,col});
                }
            }

        }
        return image;

    }
};