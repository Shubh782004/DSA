class Solution {
public:
    int alternatingSum(vector<int>& nums) {
        int even_sum=0;
        int odd_sum=0;
        for(int i=0; i<nums.size(); i=i+2){
            even_sum+=nums[i];
        }
        for(int i=1; i<nums.size(); i=i+2){
            odd_sum+=nums[i];
        }

        return even_sum-odd_sum;
    }
};