class Solution {
public:
    int no_of_bouquets(vector<int>& bloomDay, int day, int k){
        int f=0,bouq=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=day){
                f++;
                if(f==k){
                    bouq++;
                    f=0;
                }
            }
            else f=0;
        }
        return bouq;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(long)m*k) return -1;
        int high=*max_element(bloomDay.begin(),bloomDay.end());
        int low=*min_element(bloomDay.begin(),bloomDay.end());
        while(low<high){
            int mid=low+(high-low)/2;
            int b=no_of_bouquets(bloomDay,mid,k);
            if(b<m) low=mid+1;
            else high=mid;


        }
        return low;

        
    }
};