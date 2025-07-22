class Solution {
public:
    void solve(vector<int> & temp , vector<int>&nums, vector<vector<int>>&ans, int ind){
        if(ind>=nums.size()){
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[ind]);
        solve(temp,nums,ans,ind+1);
        temp.pop_back();
        solve(temp,nums,ans,ind+1);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        solve(temp,nums,ans,0);
        return ans;

        
    }
};