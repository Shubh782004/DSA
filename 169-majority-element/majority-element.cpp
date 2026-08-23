class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int cnt=0;
        int ele=nums[0];
        for(int i=0; i<nums.size(); i++){
            if(nums[i]==ele) cnt++;
            else cnt--;
            if(cnt==0) {
                ele=nums[i];
                cnt++;
            }
        
        
        }
        return ele;
        
    }
};