class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        //Brute force Worst case - O(n*max(nums[i]))
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==2) {
                nums[i]=-1;
              
            }
            for(int ans=1; ans<nums[i]; ans++){
                if((ans|ans+1)==nums[i]) {
                    nums[i]=ans;
                    break;
                }
            }

        }
        return nums;

        
    }
};