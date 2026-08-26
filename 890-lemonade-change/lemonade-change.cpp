class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5) return false;
        int cnt_5=0,cnt_10=0;
        for(int i=0;i<bills.size(); i++){
            if(bills[i]==5) cnt_5++;
            else if(bills[i]==10){
                cnt_10++;
                if(cnt_5>=1) cnt_5--;
                else return false;
            }
            else {
                if(cnt_10>=1 && cnt_5>=1){
                    cnt_10--;
                    cnt_5--;
                }
                else if(cnt_5>=3) cnt_5-=3;
                else return false;
            }
        }
        return true;
        
    }
};