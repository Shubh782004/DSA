class Solution {
public:
    bool dfs(int src,vector<vector<int>>& graph,vector<int>&color,int col){
        color[src]=col;
        for(auto adjc: graph[src]){
            if(color[adjc]==-1){
                if(dfs(adjc,graph,color,!col)==false) return false;
            }
            else if(color[adjc]==col) return false;
        }
        return true;
        

    }
    bool isBipartite(vector<vector<int>>& graph) {
        vector<int>color(graph.size(),-1);
        for(int i=0; i<graph.size(); i++){
            if(color[i]==-1){
                if(dfs(i,graph,color,0)==false) return false;
            }
        }
        return true;


    }
};