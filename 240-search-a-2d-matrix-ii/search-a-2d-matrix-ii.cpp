class Solution {
public:
//     bool Binary_search(vector<int>& row, int target) {
//         int m = row.size();
//         int low = 0, high = m - 1;
//         while (low <= high) {
//             int mid = (low + high) / 2;
//             if (row[mid] == target) {
//                 return true;
//             } else if (row[mid] > target) {
//                 high = mid - 1;
//             } else {
//                 low = mid + 1;
//             }
//         }
//         return false;
//     }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m= matrix[0].size();
    //     if (n == 0) return false;
    //     int m = matrix[0].size();
    //     if (m == 0) return false;

    //     for (int i = 0; i < n; i++) {
    //         if (matrix[i][0] <= target && matrix[i][m - 1] >= target) {
    //             return Binary_search(matrix[i], target);
    //         }
    //     }

    //     return false;
    // }
    int row = 0, col = m - 1;

    while (row < n && col >= 0) {
        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] > target) col--;
        else row++;
    }

    return false;
}

    
};
