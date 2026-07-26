class Solution {
public:
    int largestInteger(int n, int s) {
        if (s==0) return 0;
        if(s>n*9) return -1;
    
        int no_of_nines= s/9;
        int other_digit= s%9;
        int num=n;
        int ans=0;
        while(no_of_nines){
            ans=ans*10+9;
            no_of_nines--;
            num--;
        }
        if(num>0){
            ans=ans*10+other_digit;
            num--;
        }
        while(num){
            ans=ans*10;
            num--;
        }
        return ans;




        
    }
};