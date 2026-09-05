class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>suff(n,INT_MAX);
        suff[n-1]=nums[n-1];
        for(int i=n-2; i>=0; i--){
            suff[i]=min(suff[i+1],nums[i]);
        }
        int max=nums[0];
        for(int i=0; i<n; i++){
            if(nums[i]>max) max=nums[i];
            int stab=max-suff[i];
            if(stab<=k) {
                return i;
                break;
            }
        }
        return -1;
        
    }
};