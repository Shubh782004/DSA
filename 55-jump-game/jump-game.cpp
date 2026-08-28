class Solution {
public:
    bool canJump(vector<int>& nums) {
        if(nums.size()==1) return true;
        
        int furthest=-1;
        for(int i=0; i<nums.size()-1; i++){
            furthest=max(furthest,i+nums[i]);
            if(furthest<i+1) return false;
            if(furthest>=nums.size()-1) return true;
        }
        return false;
        
    }
};