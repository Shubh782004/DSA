class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int l=0,r=0;
        int n=nums.size();
        int zero=0;
        int cnt=0;
        while(r<n){
            if(nums[r]==0)zero++;
            while(zero>1 && l<=r){
                if(nums[l]==0) zero--;
                l++;
            }
            cnt=max(cnt,r-l+1);
            r++;

        }
        return cnt-1;
    }
};