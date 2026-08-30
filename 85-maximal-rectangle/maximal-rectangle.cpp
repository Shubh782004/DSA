class Solution {
public:
    int lHist(vector<int>&mat){
        int n=mat.size();
        stack<int>st;
        int maxAr=0;
        for(int i=0;i<n; i++){
            while(!st.empty() && mat[st.top()]>=mat[i]){
                int el=st.top();
                st.pop();
                int nse=i;
                int pse=(!st.empty())?st.top():-1;
                maxAr=max(maxAr,(nse-pse-1)*mat[el]);
            }
            st.push(i);
        }
        while(!st.empty()){
            int el=st.top();
            st.pop();
            int nse=n;
            int pse=(!st.empty())?st.top():-1;
            maxAr=max(maxAr,(nse-pse-1)*mat[el]);
        }
        return maxAr;

    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>pre(n,vector<int>(m,0));
        for(int j=0; j<m ;j++){
            int sum=0;
            for(int i=0; i<n; i++){
                sum+=(matrix[i][j])-'0';
                if(matrix[i][j]=='0') sum=0;
                pre[i][j]=sum;
            }
        }
        int maxAr=INT_MIN;
        for(int i=0; i<n ; i++){
            maxAr=max(maxAr,lHist(pre[i]));
        }
        return maxAr;

        
    }
};