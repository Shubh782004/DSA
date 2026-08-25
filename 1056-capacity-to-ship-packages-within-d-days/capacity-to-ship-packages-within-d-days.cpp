class Solution {
public:
    int no_of_days(vector<int>& weights,int weigh){
        int day=1,sum=0;
        for(int i=0; i<weights.size(); i++){
           if(sum+weights[i]>weigh){
            day++;
            sum=weights[i];
           }
           else sum+=weights[i];
        }
        return day;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int high= accumulate(weights.begin(),weights.end(),0);
        int low= *max_element(weights.begin(),weights.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(no_of_days(weights,mid)<=days) high=mid;
            else low= mid+1;
        }
        return low;


        
    }
};