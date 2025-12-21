class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        int cnt=0, ind=0;
        for(int i=0; i<n-1; i++){
            if(nums[i]>nums[i+1]) {
                cnt++;
                ind=i;
            }
        }
        if(cnt==0) return true;
        else if(cnt==1){
            if(ind>0 && ind<n-2 && nums[ind]>nums[ind+2]&& nums[ind-1]>nums[ind+1]) return false;
            else return true;
        }
        else return false;
    }
};