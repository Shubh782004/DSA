class Solution {
public:
    // bool dfs(int node, vector<int>&vis,vector<int>&pathvis,vector<vector<int>>&adj){
    //     vis[node]=1;
    //     pathvis[node] = 1;
    //     for(auto adjc:adj[node]){
    //         if(!vis[adjc]){
                
    //             if(dfs(adjc,vis,pathvis,adj)) return true;
    //         }
    //         else if(pathvis[adjc]) return true;
    //     }
    //     pathvis[node]=0;
        
    //     return false;

    
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);
        vector<int>Indegree(numCourses,0);
        int ans=0;
        for(int i=0; i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
            Indegree[prerequisites[i][0]]++;
        }
        
        // for(int i=0; i<numCourses; i++){
        //     if(!vis[i]) {
        //         if(dfs(i,vis,pathvis,adj)) return false;
        //     }
        // }
        // return true;
        
        queue<int>q;
        for(int i=0; i<numCourses; i++){
            if(Indegree[i]==0) q.push(i);
        }
        while(!q.empty()){
            int node= q.front();
            q.pop();
            ans++;
            for(auto it: adj[node]){
                Indegree[it]--;
                if(Indegree[it]==0) q.push(it);
            }
            
        }
        if(ans==numCourses) return true;
        else return false;



    }
};