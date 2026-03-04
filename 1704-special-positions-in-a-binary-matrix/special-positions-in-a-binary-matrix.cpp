class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        vector<int>row_cnt(mat.size(),0);
        vector<int>col_cnt(mat[0].size(),0);
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1){
                    row_cnt[i]++;
                    col_cnt[j]++;
                }
            }
        }
        int ans=0;
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j]==1 && row_cnt[i]==1 && col_cnt[j]==1){
                    ans++;
                    
                }
            }
        }
        return ans;

        
    }
};