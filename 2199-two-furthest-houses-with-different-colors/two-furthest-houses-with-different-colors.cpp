class Solution {
public:
    int maxDistance(vector<int>& colors) {
        int ans1=0;
        for(int i=colors.size()-1; i>0; i--){
        if(colors[i]!=colors[0]) {
            ans1=abs(i-0);
            break;
        }
        }
        int ans2=0;
        for(int i=0; i<colors.size()-1; i++){
            if(colors[i]!=colors[colors.size()-1]){
                ans2=(colors.size()-1-i);
                break;
            }
        }
        int ans=max(ans1,ans2);
        
        
        return ans;
    }
};