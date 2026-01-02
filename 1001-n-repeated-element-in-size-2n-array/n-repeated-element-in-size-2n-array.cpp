class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        if(nums[0]==nums[nums.size()-1]) return nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==nums[i+1] || nums[i]==nums[i+2]) return nums[i];
          
        }
        return nums[0];
        
        
    }
};