class Solution {
public:
    int hours(vector<int>& piles, int speed){
        int cnt=0;
        for(int i=0; i<piles.size(); i++){
            if(piles[i]<=speed) cnt++;
            else {
                cnt+=piles[i]/speed;
                if(piles[i]%speed) cnt++;
            }
        }
        return cnt;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int high=*max_element(piles.begin(),piles.end());
        int low=1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(hours(piles,mid)<=h)  high=mid;
            else low=mid+1;
        }
        return low;
        
        
    }
};