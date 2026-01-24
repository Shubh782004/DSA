class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int max_sum= nums[0]+nums[n-1];
        int left=1,right=n-2;
        while(left<right){
            max_sum=max(max_sum,nums[left]+nums[right]);
            left++;
            right--;
        }
        return max_sum;
        
    }
};