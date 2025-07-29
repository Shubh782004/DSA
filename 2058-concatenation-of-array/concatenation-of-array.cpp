class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>temp;
        for(int i=0; i<nums.size(); i++){
            temp.push_back(nums[i]);
        }
        for(int i=0; i<temp.size(); i++){
            nums.push_back(temp[i]);
        }
        return nums;
    }
};