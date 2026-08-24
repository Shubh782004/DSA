class Solution {
public:
    int bloom(vector<int>& bloomDay, int k,int day){
        int f=0,bouque=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(bloomDay[i]<=day) {
                f++;
                if(f==k){
                    bouque++;
                    f=0;
                }
            }
            else f=0;
        }
        return bouque;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        if(bloomDay.size()<(long long) m*k) return -1;
        int high= *max_element(bloomDay.begin(),bloomDay.end());
        int low= *min_element(bloomDay.begin(),bloomDay.end());
        while(low<high){
            int mid=low+(high-low)/2;
            if(bloom(bloomDay,k,mid)>=m) high=mid;
            else low=mid+1;

        }
        return low;


        
    }
};