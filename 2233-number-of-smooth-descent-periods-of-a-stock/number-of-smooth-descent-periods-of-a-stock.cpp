class Solution {
public:
    long long getDescentPeriods(vector<int>& prices) {
        long long ans= prices.size();
        if (ans==1) return ans;
        int l=0,r=0;
        long long cnt=1;
        while(r>=l && r<prices.size()-1){
            if(prices[r]-prices[r+1]!=1){
                ans+=cnt*(cnt-1)/2;
                l=r;
                cnt=1;
            }
            else cnt++;
            r++;
        }
        ans+=cnt*(cnt-1)/2;
        return ans;
        
    }
};