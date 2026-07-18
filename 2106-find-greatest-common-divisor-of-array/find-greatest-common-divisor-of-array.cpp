class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=INT_MAX;
        int mx=INT_MIN;
        for(int i=0;i<nums.size();i++){
            mn=min(mn,nums[i]);
            mx=max(mx,nums[i]);
        }
        int ans=1;
        for(int j=mn; j>=1; j--){
            if((mn%j==0) && (mx%j==0)){
               return j;
            }
        }
        return ans;

        
    }
};