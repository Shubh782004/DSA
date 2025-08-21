class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        
        long xorr=0;
        for(int i=0; i<nums.size(); i++){
            xorr=xorr^nums[i];
        }
        long  rightsetbit= xorr&-xorr; // can be xorr & -xorr or xorr&~(xorr-1) but giving runtime error for INT_MIN if taken int 
        int a=0,b=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]&rightsetbit) a^=nums[i];
            else b^=nums[i];
        }
        return {a,b};


        
        
    }
};