class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        long long max1=0;
        long long max2=0;
        int ind=0;
        for(int i=0; i<nums.size(); i++){
            if(abs(nums[i])>max1)  {
                max1= abs(nums[i]);
                ind=i;
            }
        }
        for(int i=0; i<nums.size();i++){

            if(ind!=i &&abs(nums[i])>max2 && abs(nums[i])<=max1) max2= abs(nums[i]);
        }
        return max1*max2*100000;
    }
};