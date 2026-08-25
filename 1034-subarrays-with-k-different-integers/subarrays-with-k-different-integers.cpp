class Solution {
public:
    int subwithK(vector<int>& nums, int k){
        unordered_map<int,int>mp;
        int cnt=0;
        int l=0,r=0;
        int n=nums.size();
        while(r<n){
            mp[nums[r]]++;
            while(mp.size()>k && l<=r){
                mp[nums[l]]--;
                if(mp[nums[l]]==0) mp.erase(nums[l]);
                l++;
            }
            cnt+=(r-l+1);
            r++;
        }
        return cnt;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return subwithK(nums,k)-subwithK(nums,k-1);
        
    }
};