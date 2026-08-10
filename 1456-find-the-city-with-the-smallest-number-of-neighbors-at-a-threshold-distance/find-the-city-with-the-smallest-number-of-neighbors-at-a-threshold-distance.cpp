class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>>dist(n,vector<int>(n,INT_MAX));
        for(int i=0; i<n; i++){
            dist[i][i]=0;
        }
        for(int i=0; i<edges.size(); i++){
            int u= edges[i][0];
            int v= edges[i][1];
            int wt= edges[i][2];
            dist[u][v]=wt;
            dist[v][u]=wt;
        }
        for(int via=0; via<n ; via++){
            for(int i=0; i<n; i++){
                for(int j=0; j<n; j++){
                    if(dist[i][via]!=INT_MAX && dist[via][j]!=INT_MAX){
                        dist[i][j]=min(dist[i][j],dist[i][via]+dist[j][via]);
                    }
                }
            }
        }

        int city_min_cnt=INT_MAX;
        int city=-1;

        for(int i=0 ; i<n ; i++){
            int cities_cnt=0;
            for(int j=0; j<n ; j++){
                if(distanceThreshold>=dist[i][j]){
                    cities_cnt++;
                }
            }
            if(city_min_cnt>= cities_cnt){
                city_min_cnt= cities_cnt;
                city= i;
            }
        }
        return city;


        
    }
};