class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        set<int>st;
        int min=100,max=1;
        for(int i=0; i<nums.size();i++){
            if(nums[i]<min) min=nums[i];
            if(nums[i]>max) max=nums[i];
            st.insert(nums[i]);
        }
        for(int i=min; i<=max; i++){
            if(st.find(i)==st.end()) ans.push_back(i);
        }
        return ans;


        
    }
};