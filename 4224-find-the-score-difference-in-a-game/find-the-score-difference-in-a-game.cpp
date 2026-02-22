class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int n=nums.size();
        bool p1=true;
        bool p2=false;
        int s1=0,s2=0;
        for(int i=0; i<n; i++){
            if(nums[i]%2==1){
                p1=!p1;
                p2=!p2;
            }
            if((i+1)%6==0){
                p1=!p1;
                p2=!p2;
            }
            if(p1) s1+=nums[i];
            if(p2) s2+=nums[i];
        }
        return s1-s2;
    }
};