class Solution {
public:
    int minimumDistance(vector<int>& nums) {
        int n=nums.size();
        int min_dist= INT_MAX;
        for(int i=0; i<n; i++){
                int num=nums[i];
                for(int j=i+1; j<n ;j++){
                    if(nums[j]==num){
                        for(int k=j+1; k<n; k++){
                            if(nums[k]==num){
                                min_dist= min(min_dist,2*(k-i));
                            }
                        }
                    }
                }
                
            
        }
        if(min_dist==INT_MAX) return -1;
        else return min_dist;
    }
};