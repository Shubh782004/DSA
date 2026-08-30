class Solution {
public:
    int trap(vector<int>& height) {
        int l=0; 
        int r=height.size()-1;
        int lMax=0;
        int RMax=0;
        int ans=0;
        while(l<r){
            lMax=max(height[l],lMax);
            RMax=max(height[r],RMax);
            if(lMax<RMax){
                ans+=lMax-height[l];
                l++;
            }
            else {
                ans+=RMax-height[r];
                r--;
            }
        }
        return ans;
        
    }
};