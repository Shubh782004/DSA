class Solution {
public:
    int f(vector<int>& nums, int ind,vector<int>&dp){
        if(ind==nums.size()-1) return 0;
        int ans=1e9;
        if(dp[ind]!=-1) return dp[ind];
        for(int i=1;i<=nums[ind];i++ ){
            if(i+ind<nums.size()) ans= min(ans,1+f(nums,i+ind,dp));
            
        }
        return dp[ind]=ans;
    }
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        vector<int>dp(nums.size(),-1);
        
        return f(nums,0,dp);
        
    }
};