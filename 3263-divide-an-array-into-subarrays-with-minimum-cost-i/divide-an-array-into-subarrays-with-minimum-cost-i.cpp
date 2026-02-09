class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int ans=nums[0];
        int s=51,ss=51;
        for(int i=1; i< nums.size(); i++){
            if(nums[i]<=s){
                ss=s;
                s=nums[i];
            }
            else if(nums[i]<ss){
                ss=nums[i];
            }
        }
        ans=ans+s+ss;
        return ans;
        
    }
};