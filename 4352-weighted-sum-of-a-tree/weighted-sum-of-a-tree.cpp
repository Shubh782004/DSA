class Solution {
public:
    long long weightedSum(vector<int>& parent, vector<int>& nums) {
        vector<vector<int>>adj(nums.size());
        for(int i=0; i<parent.size();i++){
            if(parent[i]!=-1){
                adj[parent[i]].push_back(i);
            }
        }
        queue<pair<int,int>>q;
        long long sum=0;
        vector<int>depth(parent.size(),0);
        for(int i=0; i<parent.size(); i++){
            if(parent[i]==-1) {
                q.push({i,1});
            }
        }
        int height=0;
        while(!q.empty()){
            int node= q.front().first;
            int dep= q.front().second;
            depth[node]=dep;
            q.pop();
            height=max(height,dep);
            for(auto it: adj[node]){
                q.push({it,dep+1});
            }
        }
        for(int i=0; i<nums.size(); i++){
            sum+=((long long)nums[i]*(height -depth[i] +1));
        }
        return sum;



        

        
        
    }
};