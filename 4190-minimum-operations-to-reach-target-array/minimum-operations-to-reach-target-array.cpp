class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& target) {
        unordered_set<int>st;
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=target[i] && st.find(nums[i])==st.end()){
                ans++;
                st.insert(nums[i]);
            }
        }
        return ans;
        
    }
};