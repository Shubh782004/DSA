class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);
        for(int i=0; i<flights.size(); i++){
            int u=flights[i][0];
            int v=flights[i][1];
            int w=flights[i][2];
            adj[u].push_back({v,w});
        }
        vector<int>dist(n,INT_MAX);
        queue<pair<int,pair<int,int>>>pq;
        pq.push({0,{0,src}});
        dist[src]=0;
        while(!pq.empty()){
            int stops=pq.front().first;
            int node= pq.front().second.second;
            int dis= pq.front().second.first;
            pq.pop();
            if(stops>k) continue;
            for(auto it:adj[node]){
                int adjNode= it.first;
                int wt=it.second;

                if(dist[adjNode]>wt+dis && stops<=k){
                    dist[adjNode]=wt+dis;
                    pq.push({stops+1,{dist[adjNode],adjNode}});
                }
            }
        }     
    
        if(dist[dst]==INT_MAX) return -1;
        else return dist[dst];
    }
};