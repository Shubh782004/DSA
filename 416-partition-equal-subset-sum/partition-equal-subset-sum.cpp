class Solution {
public:
    bool f(vector<int>& nums, int ind,int t, vector<vector<int>>&dp){
        if(t==0) return true;
        if(ind==0) return (t==nums[ind]);
        if(dp[ind][t]!=-1) return dp[ind][t];
        bool nottake= f(nums,ind-1,t,dp);
        bool take=false;
        if(nums[ind]<=t) take=f(nums,ind-1,t-nums[ind],dp);
        return dp[ind][t]=take||nottake;

    }
    bool canPartition(vector<int>& nums) {
        int target=accumulate(nums.begin(),nums.end(),0);
        if(target%2) return false;
        int t=target/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(t+1,-1));
        return f(nums,n-1,t,dp);


        
    }
};