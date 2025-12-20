class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        unordered_map<int,int>mpp;
        for(int i=0; i<x.size();i++){
            if(mpp.find(x[i])==mpp.end()) mpp[x[i]]=y[i];
            else mpp[x[i]]=max(mpp[x[i]],y[i]);
        }
        vector<int>sol;
        for(auto it:mpp){
            sol.push_back(it.second);
        }
        if(sol.size()<3) return -1;
        sort(sol.rbegin(),sol.rend());
        return sol[0]+sol[1]+sol[2];




        
    }
};