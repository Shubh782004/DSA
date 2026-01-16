class Solution {
public:
    int splits(vector<int>& nums, int target){
        int sum=0;
        int split=1;
        for(int i=0; i<nums.size(); i++){
            if(sum+nums[i]>target){
                split++;
                sum=nums[i];
            }
           else sum+=nums[i];
        }
        return split;
    }
    int splitArray(vector<int>& nums, int k) {
        int high=accumulate(nums.begin(),nums.end(),0);
        int low=*max_element(nums.begin(),nums.end());
        while(low<high){
            int mid=low+(high-low)/2;
            int split=splits(nums,mid);
            if(split>k) low=mid+1;
            else high =mid;

        }
        return low;
        
    }
};