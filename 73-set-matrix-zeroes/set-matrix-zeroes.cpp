class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();    // Number of rows.
        int cols = matrix[0].size(); // Number of columns.

        // Create vectors to mark rows and columns for zeroing.
        vector<int> row(rows, 0);
        vector<int> col(cols, 0);

        // Loop through the matrix to mark rows and columns for zeroing.
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] == 0) {
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Zero out the rows and columns based on the marked vectors.
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (row[i] || col[j]) {
                    matrix[i][j] = 0;
                }
            }
        }
    }
};
