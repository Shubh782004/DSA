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
        vector<vector<bool>>dp(n,vector<bool>(t+1,0));
        for(int i=0; i<n ; i++) dp[i][0]=true;
        if(nums[0]<t) dp[0][nums[0]]=true;
        for(int i=1; i<=n-1; i++){
            for(int tar=1; tar<=t; tar++){
                bool nottake= dp[i-1][tar];
                bool take=false;
                if(nums[i]<=tar) take=dp[i-1][tar-nums[i]];
                dp[i][tar]=take||nottake;
            }
        }
        return dp[n-1][t];
        
        // return f(nums,n-1,t,dp);


        
    }
};