class DisJointSet{
    vector<int>parent,size;
public: 
    DisJointSet(int n){
        parent.resize(n);
        size.resize(n,1);
        for(int i=0; i<n ; i++){
            parent[i]=i;
        }
    }
    int findParent(int u){
        if(u==parent[u]) return u;
        return parent[u]=findParent(parent[u]);
    }
    void Union(int u, int v){
        int ul_u= findParent(u);
        int ul_v= findParent(v);
        if(size[ul_u]>size[ul_v]){
            parent[ul_v]=ul_u;
            size[ul_u]+=size[ul_v];
        }
        else {
            parent[ul_u]=ul_v;
            size[ul_v]+=size[ul_u];
        }
    }
};

class Solution {
public:
    // void dfs(int src,vector<vector<int>>&adj,vector<int>&vis){
    //     vis[src]=1;
    //     for(auto it: adj[src]){
    //         if(!vis[it]){
    //             dfs(it,adj,vis);
    //         }
    //     }
    // }

    int makeConnected(int n, vector<vector<int>>& connections) {
        if((n-1)>connections.size()) return -1;
        DisJointSet ds(n);
        int extra=0;
        // vector<int>vis(n,0);
        // vector<vector<int>>adj(n);
        for(int i=0; i<connections.size();i++){
            int u= connections[i][0];
            int v= connections[i][1];
            if(ds.findParent(u)==ds.findParent(v)) extra++;
            else ds.Union(u,v);
        //     adj[u].push_back(v);
        //     adj[v].push_back(u);
        // }
        // int connected=0;
        // for(int i=0; i<n ;i++){
        //     if(!vis[i]){
        //         dfs(i,adj,vis);
        //         connected++;
        //     }
        }
        // return connected-1;

        int comp=0;
        for(int i=0; i<n ; i++){
            if(ds.findParent(i)==i) comp++;
        }
        return (extra>=comp-1)? comp-1: -1;



        
    }
};