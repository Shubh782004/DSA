class Solution {
public:
    void dfs(int node, vector<vector<int>>&adj,vector<int>&vis, vector<int>&visbyk,vector<int>&visbynotk,vector<int>&ans){
        vis[node]=1;
        if(visbyk[node]==1){
            for(auto it: adj[node]){
                if(!vis[it]){
                    visbyk[it]=1;
                    dfs(it,adj,vis,visbyk,visbynotk,ans);
                }
            }
        }
        else{
            for(auto it:adj[node]){
                    visbynotk[it]=1;
                    if(visbyk[it]){
                        for(int i=0; i<visbyk.size(); i++){
                            visbyk[i]=0;
                        }
                        return;
                    }
                    

                
            }
        }
}
    vector<int> remainingMethods(int n, int k, vector<vector<int>>& invocations) {
        vector<vector<int>>adj(n);
        vector<int>vis(n,0);
        vector<int>visbyk(n,0);
        vector<int>visbynotk(n,0);
        vector<int>ans;
        for(int i=0; i<invocations.size(); i++){
            adj[invocations[i][0]].push_back(invocations[i][1]);
        }

        visbyk[k]=1;
        dfs(k,adj,vis,visbyk,visbynotk,ans);
        for(int i=0; i<n;i++){
            if(!visbyk[i] && !vis[i]) {
                visbynotk[i]=1;
                dfs(i,adj,vis,visbyk,visbynotk,ans);
            }
        }

        for(int i=0; i<n;i++){
            if(!visbyk[i]) ans.push_back(i);
        }
        return ans;


        

    }
};