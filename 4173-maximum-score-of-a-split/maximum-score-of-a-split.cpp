class Solution {
public:
    long long maximumScore(vector<int>& nums) {
        int n=nums.size();
        vector<long long>prefixSum(n,0);
        prefixSum[0]=nums[0];
        vector<int>suffixMin(n,INT_MAX);
        suffixMin[n-1]=INT_MAX;
        for(int i=1; i<n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i];
        }
        for(int i=n-2; i>=0; i--){
            suffixMin[i]=min(suffixMin[i+1],nums[i+1]);
        }
        long long ans= LLONG_MIN;
        for(int i=0; i<n; i++){
            ans=max(ans,prefixSum[i]-suffixMin[i]);
        }
        return ans;
        
    }
};