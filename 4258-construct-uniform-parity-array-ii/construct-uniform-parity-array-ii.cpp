class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int small_odd=INT_MAX;
        int even_num=0;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2 && nums1[i]<small_odd) small_odd=nums1[i];
            else if(nums1[i]%2==0) even_num++;
        }
        if(even_num==0 || even_num==nums1.size()) return true;

        int change_even=0;
        for(int i=0; i<nums1.size(); i++){
            if(nums1[i]%2==0 && nums1[i]-small_odd>=1) change_even++; 
        }
        if(change_even!=even_num) return false;
        else return true;
        
    }
};