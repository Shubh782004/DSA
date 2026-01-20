class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        //Brute force Worst case - O(n*max(nums[i]))
        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==2) {
        //         nums[i]=-1;
              
        //     }
        //     for(int ans=1; ans<nums[i]; ans++){
        //         if((ans|ans+1)==nums[i]) {
        //             nums[i]=ans;
        //             break;
        //         }
        //     }

        // }
        // return nums;

        //Optimal using observation of bits by converting left most set bit =0 in consecutive series

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