class Solution {
public:
    int no_of_hours(vector<int>&piles,int k){
        int hours=0;
        for(int i=0; i<piles.size(); i++){
            if(piles[i]%k==0) hours+=piles[i]/k;
            else hours+=piles[i]/k +1;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int k_max=INT_MIN;
        for(int i=0; i<piles.size(); i++){
            k_max=max(k_max,piles[i]);
        }

        int low=1,high=k_max;
        while(low<high){
            int mid= low+(high-low)/2;
            int hr=no_of_hours(piles,mid);
            if(h<hr){
                low=mid+1;
            }
            else high=mid;
        } 
        return low;       
    }
};