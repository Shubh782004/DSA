class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        if(k==1) return 0;
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int min_ind=0,max_ind=k-1;
        int min_diff=INT_MAX;
        while(max_ind<n){
            min_diff=min(min_diff,nums[max_ind]-nums[min_ind]);
            max_ind++;
            min_ind++;
        }
        return min_diff;

    }
};