class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int maxi=-1000;
        int smax=-1000;
        int tmax=-1000;
        int mini=1000;
        int smin= 1000;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]>=maxi){
                tmax=smax;
                smax=maxi;
                maxi=nums[i];
            }
            else if(nums[i]>=smax){
                tmax=smax;
                smax=nums[i];
            }
            else if(nums[i]>=tmax){
                tmax=nums[i];
            }
            if (nums[i]<=mini){
                smin=mini;
                mini=nums[i];
            }
            else if (nums[i]<=smin){
                smin=nums[i];
            }
        }
        int ans;
        ans=max(maxi*smax*tmax, maxi*mini*smin);
        return ans;
        
    }
};