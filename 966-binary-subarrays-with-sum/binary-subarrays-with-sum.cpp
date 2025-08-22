class Solution {
public:
    //Optimal O(2N)
    int numSubarraysWithSumlessthanorequalto(vector<int>& nums, int goal){
        int n=nums.size();
        int l=0,r=0;
        long cnt=0,sum=0;
        while(r<n){
            sum+=nums[r];
            while(sum>goal && l<=r){
                sum-=nums[l];
                l++;
            }
            cnt+=r-l+1;
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        //Brute force O(N^2)
        // int n=nums.size();
        // int cnt=0; 
        // for(int i=0; i<n ;i++){
        //     int sum=0;
        //     for(int j=i; j<n; j++){
        //         sum+=nums[j];
        //         if(sum==goal)cnt++;
        //         else if(sum>goal) break;


        //     }
        // }
        // return cnt;
        return numSubarraysWithSumlessthanorequalto(nums,goal) - numSubarraysWithSumlessthanorequalto(nums,goal-1);
       

    }
};
