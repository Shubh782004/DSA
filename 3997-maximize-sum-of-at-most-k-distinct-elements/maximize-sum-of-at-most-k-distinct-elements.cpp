class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int>st;
        vector<int>ans;
        for(int i=0; i<nums.size(); i++){
            st.insert(nums[i]);
        }
        set<int>::reverse_iterator it;
        for(it=st.rbegin(); it!=st.rend(); it++ ){
            if(k==0) break;
            else{
                ans.push_back(*it);
                k--;
            }
        }
        return ans;
            
    }
    
};