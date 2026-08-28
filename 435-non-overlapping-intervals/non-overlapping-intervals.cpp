class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        if(n==1) return 0;
        sort(intervals.begin(),intervals.end(),[](const vector<int>&a,const vector<int>&b){
            return a[1]<b[1];
        });
        int prev=0;
        int cnt=1;
        for(int i=1; i<n ; i++){
            if(intervals[i][0]>=intervals[prev][1]){
                prev=i;
                cnt++;
            }
        }
        return n-cnt;
        
    }
};