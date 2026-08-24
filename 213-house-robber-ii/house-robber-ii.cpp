class Solution {
public:
    int robber(vector<int>&nums,int start, int end){
        if(nums.size()==1) return nums[start];
        int prev=nums[start];
        int prev2=0;
        for(int i=start; i<=end; i++){
            int take= nums[i];
            if(i>start+1) take+=prev2;
            int nottake= prev;
            int cur=max(take,nottake);
            prev2=prev;
            prev=cur;

        }
        return prev;
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int ans1= robber(nums,0,nums.size()-2);
        int ans2=robber(nums,1,nums.size()-1);
        return max(ans1,ans2);
        
    }
};