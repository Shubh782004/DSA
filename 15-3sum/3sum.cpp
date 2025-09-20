class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        //sort the nums
        sort(nums.begin(),nums.end());
        vector < vector<int>> ans;
        int n = nums.size();
        for(int i = 0; i < n; i++){
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int j = i + 1;
            int k = n - 1;
            //two pointer start here
            while(j < k){
                int sum = nums[i] + nums[j] + nums[k];
                //three conditions
                if(sum < 0){
                    j++;
                }else if(sum > 0){
                    k--;
                }else {
                    //store in temp and ans 
                    vector<int> temp = {nums[i],nums[j],nums[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    //j&k update till nums[j] != nums[j+1]
                    while(nums[j] == nums[j-1] && j < k) j++;
                    while(nums[k] == nums[k+1] && j < k) k--;
                }
            }
        }
        
        return ans;
    }
};