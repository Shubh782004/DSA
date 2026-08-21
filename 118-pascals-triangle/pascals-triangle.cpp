class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;

        int n=0;
        while(n<numRows){
            vector<int>row(n+1,1);
            
            for(int i=1; i<n ; i++){
                row[i]=ans[n-1][i]+ans[n-1][i-1];
            }
            
            ans.push_back(row);
            n++;
        }
        return ans;
    }
};