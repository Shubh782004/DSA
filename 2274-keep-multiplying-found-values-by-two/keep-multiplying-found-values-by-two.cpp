class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        vector<int>hash(10000,0);
        for(int i=0; i<nums.size(); i++){
            hash[nums[i]]=1;
        }
        while(hash[original]!=0){
            original=original*2;
        }
        return original;
        
    }
};