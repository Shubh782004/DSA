class Solution {
public:
    int sumDiv(vector<int>& nums, int div){
        int sum=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%div!=0) sum+=(nums[i]/div)+1;
            else sum+=nums[i]/div;
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int high=*max_element(nums.begin(),nums.end());
        int low=1;
        while(low<high){
            int mid= low +(high-low)/2;
            int t=sumDiv(nums,mid);
            if(t>threshold) low=mid+1;
            else high=mid;
        }
        return low;
    }
};