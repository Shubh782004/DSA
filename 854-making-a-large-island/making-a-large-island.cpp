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
    int largestIsland(vector<vector<int>>& grid) {
        int n= grid.size();
        DSU dsu(n*n);
        for(int i=0; i<n ; i++){
            for(int j=0; j<n ; j++){
                if(grid[i][j]==0) continue; 
                vector<int> dr={-1,0,1,0};
                vector<int> dc={0,-1,0,1};
                for(int k=0; k<4; k++){
                    int r=i+dr[k];
                    int c=j+dc[k];
                    if(r<n && r>=0 && c<n && c>=0 && grid[r][c]==1 ){
                        int node= i*n +j;
                        int adjnode= r*n+c;
                        dsu.DSU_by_size(node,adjnode);
                    }
                } 
            }
        }
        int siz=0;
    
        for(int i=0; i<n ; i++){
            for(int j=0; j<n ; j++){
                if(grid[i][j]==1) continue; 
                set<int>st;
                vector<int> dr={-1,0,1,0};
                vector<int> dc={0,-1,0,1};
                for(int k=0; k<4; k++){
                    int r=i+dr[k];
                    int c=j+dc[k];
                    if(r<n && r>=0 && c<n && c>=0){
                        int adjnode= r*n+c;
                        if(grid[r][c]==1) st.insert(dsu.findParent(adjnode));
                    }
                }
                int s=0;
                for(auto it:st){
                    s+=dsu.size[it];
                } 
                siz=max(siz,s+1);
            }
        }

        
        
        return siz==0? n*n : siz;



        
    }
};