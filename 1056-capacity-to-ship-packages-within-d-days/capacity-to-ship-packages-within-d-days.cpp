class Solution {
public:
    int days_req(vector<int>& weights, int mid){
        int cap=0;
        int day=1;
        for(int i=0; i<weights.size(); i++){
            if(weights[i]+cap>mid){
                day++;
                cap=weights[i];
            }
            else cap+=weights[i];
        }
        return day;


    }
    int shipWithinDays(vector<int>& weights, int days) {
        int low= *max_element(weights.begin(),weights.end());
        int high= accumulate(weights.begin(),weights.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(days_req(weights,mid)<=days) high=mid-1;
            else low=mid+1;
        }
        return low;

        
    }
};