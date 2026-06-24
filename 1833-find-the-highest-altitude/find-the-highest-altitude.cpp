class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        vector<int>prefix_sum(gain.size()+1);
        prefix_sum[0]=0;
        for(int i=1; i<=gain.size();i++){
            prefix_sum[i]=prefix_sum[i-1]+gain[i-1];
            ans=max(ans,prefix_sum[i]);
        }
        return ans;

    }
};