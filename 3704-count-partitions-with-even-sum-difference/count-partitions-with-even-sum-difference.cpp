class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<int>preSum(nums.size(),0);
        preSum[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
            preSum[i]=preSum[i-1]+nums[i];
        }
        int cnt=0;
        for(int i=0; i<preSum.size()-1; i++){
            if((abs(2*preSum[i]-preSum[preSum.size()-1]))%2==0) cnt++;
        }
        return cnt;

        
    }
};