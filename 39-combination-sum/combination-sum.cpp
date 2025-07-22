class Solution {
public:
    void solve(vector<int>&candidates,vector<int>&temp,vector<vector<int>>&ans,int ind,int target){
        if (target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || ind >=candidates.size()) return;
        
        temp.push_back(candidates[ind]);
        solve(candidates,temp,ans,ind,target-candidates[ind]);
        temp.pop_back();
        solve(candidates,temp,ans,ind+1,target);

    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(candidates,temp,ans,0,target);
        return ans;
        
    }
};