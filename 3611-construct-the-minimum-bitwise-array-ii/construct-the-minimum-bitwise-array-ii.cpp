class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
         for(int i=0; i<nums.size();i++){
            if(nums[i]==2) nums[i]=-1;
            else if((nums[i]&2)==0) nums[i]=nums[i]-1;
            else{
                nums[i]=~(((nums[i]+1)&(~nums[i]))>>1)&nums[i];
            }
        }
        return nums;
    }
};