class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int n=nums.size();
        int op=0;
        while(n>1){
            bool sorted=true;
            for(int i=0; i<n-1; i++){
                if(nums[i]>nums[i+1]) sorted=false;
            }
            if(sorted) return op;

            int min_sum=INT_MAX;
            int ind=-1;
            for(int i=0; i<n-1; i++){
                int sum=nums[i]+nums[i+1];
                if(sum<min_sum){
                    min_sum=sum;
                    ind=i;
                }
            }
            nums[ind]=min_sum;
            nums.erase(nums.begin()+ind+1);
            op++;
            n--;
           
        }
        return op;
        
    }
};