class Solution {
public:
    int day(vector<int>& weights,int cap){
        int sum=0,d=1;
        for(int i=0; i<weights.size(); i++){
            if(sum+weights[i]>cap){
                d++;
                sum=weights[i];
            }
            else sum+=weights[i];
        }
        return d;

    }
    int shipWithinDays(vector<int>& weights, int days) {
        int min_cap=weights[0];
        int max_cap=weights[0];
        for(int i=1;i<weights.size(); i++){
            min_cap=max(min_cap,weights[i]);
            max_cap+=weights[i];
        }
        int low=min_cap, high=max_cap;
        while(low<high){
            int mid=low+(high-low)/2;
            int d=day(weights,mid);
            if(d>days) low=mid+1;
            else high=mid;

        }
        return low;
    }
};