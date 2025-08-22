class Solution {
public:
    int numberOfSubarrayslessorequal(vector<int>& nums, int k){
        int l=0,r=0;
        int n=nums.size();
        int cnt_odd=0;
        int cnt_subarray=0;
        while(r<n){
            if(nums[r]%2) cnt_odd++;
            while(cnt_odd>k && l<=r){
                if(nums[l]%2) cnt_odd--;
                l++;
            }
            cnt_subarray+=r-l+1;
            r++;
        }
        return cnt_subarray;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        return numberOfSubarrayslessorequal(nums,k) - numberOfSubarrayslessorequal(nums,k-1);
        
    }
};