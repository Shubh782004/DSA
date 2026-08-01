class Solution {
public:
    bool rec(vector<int>& nums,int l, int r, int score1, int score2, int turn){
        if(l>r){
            return score1>=score2;
        }
        if(turn%2==0){
            return rec(nums,l+1,r,score1+nums[l],score2,turn+1) || rec(nums,l,r-1,score1+nums[r],score2,turn+1);
        }
        return rec(nums,l+1,r,score1,score2+nums[l],turn+1) && rec(nums,l,r-1,score1,score2+nums[r],turn+1);
        
    }
    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        return rec(nums,0,n-1,0,0,0);
    }
};