class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int maxDiag = 0;   // to track maximum diagonal squared
        int maxArea = 0;   // to track maximum area for that diagonal

        for (int i=0; i<dimensions.size(); i++) {
            int a = dimensions[i][0], b = dimensions[i][1];
            int diagSq = a * a + b * b;   // diagonal^2
            int area = a * b;

            if (diagSq > maxDiag) {
                maxDiag = diagSq;
                maxArea = area;
            } 
            else if (diagSq == maxDiag) {
                maxArea = max(maxArea, area); // choose larger area
            }
        }
        return maxArea;
    }
};
