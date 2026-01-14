class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int ans=0;
        for(int i=0; i<nums.size();i++){
            unordered_map<int,int>mpp;
            int sum=0;
            for(int j=i; j<nums.size(); j++){
                sum+=nums[j];
                mpp[nums[j]]++;
                if(mpp.find(sum)!=mpp.end()) ans++;
            }
        }    
        return ans;
    }
    
};