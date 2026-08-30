class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 1;
        int ans=0;
        int sInd=-1,lInd=-1;
        int s=INT_MAX, l=INT_MIN;
        for(int i=0; i<n; i++){
            if(nums[i]>l){
                l=nums[i];
                lInd=i;
            }
            if(nums[i]<s){
                s=nums[i];
                sInd=i;
            }
        }

        int ans1= max(sInd+1,lInd+1);
        int ans2= max(n-sInd, n-lInd);
        int ans3= sInd+1 + n-lInd;
        int ans4= lInd+1 + n-sInd;

        int ans_comp1= min(ans1,ans2);
        int ans_comp2= min(ans_comp1,ans3);
        ans=min(ans_comp2,ans4);
        return ans;


        
    }
};