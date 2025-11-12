class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        unordered_map<int,vector<int>>mpp;
        for(int i=0; i<nums.size();i++){
            mpp[nums[i]].push_back(i);
        }
        int ans=INT_MAX;
        for(auto it:mpp){
            if(it.second.size()>=3){
                for(int i=0; i<it.second.size()-2; i++){
                    int a=it.second[i], b=it.second[i+1], c=it.second[i+2];
                    ans=min(ans,abs(a-b)+abs(b-c)+abs(c-a));
                }
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;

        
    }
};