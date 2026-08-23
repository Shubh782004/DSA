class Solution {
public:
    bool sumGame(string num) {
        int left_sum=0,right_sum=0,cnt_left=0,cnt_right=0;
        for(int i=0; i<num.size(); i++){
            if(i<=(num.size()/2)-1){
                if(num[i]=='?') cnt_left++;
                else left_sum+=num[i]-'0';
            }
            else{
                if(num[i]=='?') cnt_right++;
                else right_sum+=num[i]-'0';
            }
        }

        if((cnt_left+cnt_right)%2) return true;

        return (2*left_sum + 9*cnt_left)!=(2*right_sum + 9*cnt_right);


        
    }
};