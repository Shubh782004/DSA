class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>mpp;
        
        for(int i=0;i<n ;i++){
            mpp[nums[i]]++;
        }
        if(k==1){
            int l=-1;
            for(int i=0; i<n ;i++){
                if(mpp[nums[i]]==1 && l<nums[i]) l=nums[i];
            }
            return l;
        }
        else if(k==n){
            int lar=nums[0];
            for(int i=1;i<n ;i++){
                lar=max(lar,nums[i]);
            }
            return lar;
        }
        else{
            bool found0=false;
            bool foundn=false;
            for(int i=1; i<n-1; i++){
                if(nums[i]==nums[0]){
                    found0=true;
                }
                if(nums[i]==nums[n-1]) foundn=true;
            }
            if(nums[0]==nums[n-1]) return -1;
            if(found0 && foundn) return -1;
            else if(found0 && !foundn) return nums[n-1];
            else if(!found0 && foundn) return nums[0];
            else return max(nums[0],nums[n-1]);

        }
        return -1;
        
        
        
    }
};