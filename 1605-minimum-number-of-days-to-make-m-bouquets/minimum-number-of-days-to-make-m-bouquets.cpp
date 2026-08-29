class Solution {
public:
    int bouq(vector<int>& bloomDay, int b, int k){
        int cnt=0;
        int bloom=0;
        for(int i=0; i<bloomDay.size(); i++){
            if(b>=bloomDay[i]) cnt++;
            else{
                bloom+=cnt/k;
                cnt=0;
            }
        }
        bloom+=cnt/k;
        return bloom;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        if((long long)m*k>bloomDay.size()) return -1;
        int low= *min_element(bloomDay.begin(),bloomDay.end());
        int high= *max_element(bloomDay.begin(),bloomDay.end());
        while(low<=high){
            int mid= low+(high-low)/2;
            if(bouq(bloomDay,mid,k)>=m) high=mid-1;
            else low=mid+1;
        }
        return low;

        
    }
};