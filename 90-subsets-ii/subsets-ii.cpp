class Solution {
public:
    void solve(vector<int>&nums,vector<int>&temp, vector<vector<int>>&ans, int ind){
        ans.push_back(temp);  
        for(int i=ind; i<nums.size(); i++){
            if(i>ind && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            solve(nums,temp,ans,i+1);
            temp.pop_back();
        }

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        solve(nums,temp,ans,0);
        return ans;
        
    }
};