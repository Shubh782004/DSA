class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(); //No. of rows
        int n=matrix[0].size(); //No of columns;
        int left=0, right= n-1;
        int top=0, bottom= m-1;
        vector<int>ans;
        while(bottom>=top && right>=left){
            for(int i=left; i<=right; i++){
                ans.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top; i<=bottom; i++){
                ans.push_back(matrix[i][right]);
            }
            right--;

            if(bottom>=top){
                for(int i=right; i>=left; i--){
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(right>=left){
                for(int i=bottom; i>=top; i--){
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
            
        }
        return ans;

        
    }
};