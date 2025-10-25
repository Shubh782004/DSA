class Solution {
public:
    int totalMoney(int n) {
        int weeks=n/7;
        int days=n%7;
        int ans= weeks*28 + 7*(weeks-1)*(weeks)/2 + (weeks+days)*(weeks+days+1)/2 - (weeks)*(weeks+1)/2;


        return ans;
        
    }
};