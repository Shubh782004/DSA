class Solution {
public:
    int minElement(vector<int>& nums) {
        
        int ans=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            string n= to_string(nums[i]);
            int sum=0;
            for(int j=0; j<n.size(); j++){
                sum+=n[j]-'0';
            }
            ans=min(ans,sum);

        }
        return ans;
    }
};