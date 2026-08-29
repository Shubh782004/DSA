class Solution {
public:
    long long no_of_hrs(vector<int>& piles, int speed){
        long long hrs=0;
        for(int i=0; i<piles.size(); i++){
            if(piles[i]%speed) hrs+=(piles[i]/speed)+1;
            else hrs+=piles[i]/speed;
        }
        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(no_of_hrs(piles,mid)<=h) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};