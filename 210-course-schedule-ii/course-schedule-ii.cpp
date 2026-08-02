class Solution {
public:
    bool dfs(int node, vector<int>&vis,vector<int>&pathvis,vector<vector<int>>&adj,vector<int>&ans){
        vis[node]=1;
        pathvis[node] = 1;
        for(auto adjc:adj[node]){
            if(!vis[adjc]){
                
                if(dfs(adjc,vis,pathvis,adj,ans)) return true;
            }
            else if(pathvis[adjc]) return true;
        }
        pathvis[node]=0;
        ans.push_back(node);
        
        return false;


    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>vis(numCourses,0);
        vector<int>pathvis(numCourses,0);
        vector<int>ans;
        for(int i=0; i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        for(int i=0; i<numCourses; i++){
            if(!vis[i]) {
                if(dfs(i,vis,pathvis,adj,ans)) return {};
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
     