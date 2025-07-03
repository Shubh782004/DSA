class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();

        //Brute Force
        // int ans[n][n];
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n;j++){
        //         ans[i][j]=matrix[i][j];
        //     }
        // }
        // for(int i=0; i<n; i++){
        //     for(int j=0; j<n; j++){
        //         matrix[j][n-i-1]=ans[i][j];
        //     }
        // }
        // Optimal
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++ ){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0; i<n; i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }


    }
};