class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>max_left(n);
        vector<int>max_right(n);
        if(n<2) return nums;
        max_left[0]=0;
        max_right[n-1]=0;
        for(int i=1;i<n; i++){
            max_left[i]=max(max_left[i-1],nums[i-1]);
        }
        for(int i=n-2;i>=0; i--){
            max_right[i]=max(max_right[i+1],nums[i+1]);
        }
        ans.push_back(nums[0]);
        for(int i=1; i<n-1;i++){
            if((nums[i]>max_left[i])|| (nums[i]>max_right[i])){
                ans.push_back(nums[i]);
            }
        }
        ans.push_back(nums[n-1]);
        return ans;
        
    }
};