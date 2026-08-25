class Solution {
public:
    int f(vector<int>& coins, int amount, int ind,vector<vector<int>>&dp){
        if(ind==0){
            if(amount==0 && coins[ind]==0) return 2;
            if(amount==0 || amount%coins[0]==0) return 1;
            return 0;
        }
        if(dp[ind][amount]!=-1) return dp[ind][amount];

        int nottake= f(coins,amount,ind-1,dp);
        int take = 0;
        if(coins[ind]<=amount) take=f(coins,amount-coins[ind],ind,dp);
        return dp[ind][amount]=take+nottake;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>>dp(coins.size(),vector<int>(amount+1,-1));
        return f(coins,amount,coins.size()-1,dp);

        
    }
};