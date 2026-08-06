class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>>adj(n+1);
        for(int i=0; i<times.size(); i++){
            int u=times[i][0];
            int v=times[i][1];
            int w=times[i][2];
            adj[u].push_back({v,w});
        }
        vector<int>dist(n+1,INT_MAX);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,k});
        dist[k]=0;
        while(!pq.empty()){
            int node= pq.top().second;
            int dis= pq.top().first;
            pq.pop();
            for(auto it:adj[node]){
                int adjNode= it.first;
                int wt=it.second;
                if(dist[adjNode]>wt+dis){
                    dist[adjNode]=wt+dis;
                    pq.push({dist[adjNode],adjNode});
                }
            }
        } 
        int ans=0; 
        for(int i=1; i<n+1; i++){
            ans=max(ans,dist[i]);
        }
        return ans==INT_MAX?-1:ans;
              
       
    }
};