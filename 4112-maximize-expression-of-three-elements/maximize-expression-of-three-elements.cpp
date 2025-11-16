class Solution {
public:
    int maximizeExpressionOfThree(vector<int>& nums) {
        int a=INT_MIN,b=INT_MIN,c=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>a){
                b=a;
                a=nums[i];
            }
            else if(nums[i]>b){
                b=nums[i];
            }
            if(nums[i]<c) c=nums[i];
        }
        return a+b-c;
    }
};