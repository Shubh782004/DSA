class Solution {
public:
    // vector<int> findPSE(vector<int>&heights){
    //     int n= heights.size();
    //     stack<int>st;
    //     vector<int>Pse;
    //     for(int i=0; i<n; i++){
    //         while(!st.empty() && heights[i]<=heights[st.top()]) st.pop();
    //         if(st.empty()) Pse.push_back(-1);
    //         else Pse.push_back(st.top());
    //         st.push(i);
    //     }
    //     return Pse; 
    // }
    // vector<int> findNSE(vector<int>&heights){
    //     int n= heights.size();
    //     stack<int>st;
    //     vector<int>Nse;
    //     for(int i=n-1; i>=0; i--){
    //         while(!st.empty() && heights[i]<=heights[st.top()]) st.pop();
    //         if(st.empty()) Nse.push_back(n);
    //         else Nse.push_back(st.top());
    //         st.push(i);
    //     }
    //     reverse(Nse.begin(),Nse.end());
    //     return Nse;
    // }
    // int largestRectangleArea(vector<int>& heights) {
    //     int n= heights.size();
    //     vector<int>Pse;
    //     vector<int>Nse;
    //     Nse= findNSE(heights);
    //     Pse=findPSE(heights);
    //     int maxi=0;
    //     for(int i=0; i<n; i++){
    //         maxi=max(maxi, (Nse[i]-Pse[i]-1)* heights[i]);
    //     }
    //     return maxi;
        
    // }

    //Calculating nse and pse on the fly
    int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;

    for(int i=0; i<heights.size(); i++){
        while(!st.empty() && heights[st.top()]>=heights[i]){
            int element= st.top();
            st.pop();
            int nse=i;
            int pse=(!st.empty())?st.top():-1;
            maxArea=max(maxArea,(nse-pse-1)*heights[element]);
        }
        st.push(i);
        
    }
    while(!st.empty()){
            int ele=st.top();
            st.pop();
            int nse=n;
            int pse=(!st.empty())?st.top():-1;
            maxArea=max(maxArea,(nse-pse-1)*heights[ele]);

        }
    return maxArea;
}
};