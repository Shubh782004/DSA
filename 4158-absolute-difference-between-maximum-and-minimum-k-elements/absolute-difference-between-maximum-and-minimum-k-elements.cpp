class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        if (nums.size()==k) return 0;
        sort(nums.begin(),nums.end());

        int sum_max=0;
        int sum_min=0;
        for(int i=0; i<k; i++){
            sum_min+=nums[i];
        }
        for(int i=nums.size()-k; i<nums.size(); i++){
            sum_max+=nums[i];
        }
        return abs(sum_max-sum_min);
        
    }
};