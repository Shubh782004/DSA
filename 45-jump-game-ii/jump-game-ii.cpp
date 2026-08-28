class Solution {
public:
    // int f(vector<int>& nums, int ind,vector<int>&dp){
    //     if(ind==nums.size()-1) return 0;
    //     int ans=1e9;
    //     if(dp[ind]!=-1) return dp[ind];
    //     for(int i=1;i<=nums[ind];i++ ){
    //         if(i+ind<nums.size()) ans= min(ans,1+f(nums,i+ind,dp));
            
    //     }
    //     return dp[ind]=ans;
    // }
    int jump(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int l=0,r=0;
        int jumps=0;
        while(r<nums.size()-1){
            int furthest=0;
            for(int i=l; i<=r; i++){
                furthest=max(furthest,i+nums[i]);
            }
            l=r+1;
            r=furthest;
            jumps++;
        }
        return jumps;
        
    }
};