class Solution {
public:
    vector<int> minDistinctFreqPair(vector<int>& nums) {
        map<int,int>freq;
        int sm=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            sm=min(sm,nums[i]);
            freq[nums[i]]++;
        }
        int fr=freq[sm];
        for(auto it:freq){
            if(it.first>sm && it.second!=fr) return {sm,it.first};
        }
        return {-1,-1};
    }
};