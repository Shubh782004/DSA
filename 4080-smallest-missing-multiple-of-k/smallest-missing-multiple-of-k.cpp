class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%k==0){
                st.insert(nums[i]);
            }
        }
        int ans=k;
        for(auto it:st){
            if(it==ans) ans=ans+k;
            else return ans;
        }
        return ans;
    }

};