class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n=nums.size();
        int left=0;
        int right = n-1;
        int ans=n;
        
        while(left<=right){
            int mid=(left+ right)/2;
            if(target<=nums[mid]){

                ans=mid;
                right=mid-1;
            }
            else left=mid+1;
        
            
            
        }
        
        return ans;

    }
};