class DSU{
public:
    vector<int>size,parent;
    DSU(int n){
        size.resize(n,1);
        parent.resize(n);
        for(int i=0; i<n ; i++){
            parent[i]=i;
        }
    }

    int findParent(int u){
        if(parent[u]==u) return u;
        return parent[u]=findParent(parent[u]);
    }

    void DSU_by_size(int u, int v){
        int ul_u=findParent(u);
        int ul_v=findParent(v);
        if(ul_u == ul_v) return;
        if(size[ul_u]>size[ul_v]){
            parent[ul_v]=ul_u;
            size[ul_u]+=size[ul_v];
        }
        else{
            parent[ul_u]=ul_v;
            size[ul_v]+=size[ul_u];
        }
    }
};



class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        DSU dsu(n);
        for(int i=0; i<n ; i++){
            for(int j=i+1; j<n ; j++){
                if(stones[i][0]==stones[j][0] || stones[i][1]==stones[j][1]){
                    dsu.DSU_by_size(i,j);
                }
            }
        }
        int comp=0;
        for(int i=0; i<n ; i++){
            if(dsu.parent[i]==i) comp++;
        }
        return n-comp;

        
        
    }
};