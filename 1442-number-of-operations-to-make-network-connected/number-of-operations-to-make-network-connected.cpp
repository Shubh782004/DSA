class Solution {
public:
    void dfs(int src,vector<vector<int>>&adj,vector<int>&vis){
        vis[src]=1;
        for(auto it: adj[src]){
            if(!vis[it]){
                dfs(it,adj,vis);
            }
        }
    }

    int makeConnected(int n, vector<vector<int>>& connections) {
        if((n-1)>connections.size()) return -1;
        vector<int>vis(n,0);
        vector<vector<int>>adj(n);
        for(int i=0; i<connections.size();i++){
            int u= connections[i][0];
            int v= connections[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int connected=0;
        for(int i=0; i<n ;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                connected++;
            }
        }
        return connected-1;


        
    }
};