class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int max_sum=INT_MIN;
        int curr_sum=0;
        for(int i=0; i<n; i++){
            if(curr_sum<0) curr_sum=0;
            curr_sum+=nums[i];
            max_sum=max(curr_sum,max_sum);
        }
        
        return max_sum;
    }
};