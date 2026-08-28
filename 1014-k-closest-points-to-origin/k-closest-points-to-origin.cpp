class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>>ans;
        priority_queue<pair<int,pair<int,int>>>pq;
        for(int i=0; i<points.size(); i++){
            int x=points[i][0];
            int y=points[i][1];
            pq.push({abs(x*x + y*y),{x,y}});
            if(pq.size()>k) pq.pop();
        }
        while(!pq.empty()){
            auto [x,y]=pq.top().second;
            pq.pop();
            ans.push_back({x,y});
        }
        return ans;

    }
};