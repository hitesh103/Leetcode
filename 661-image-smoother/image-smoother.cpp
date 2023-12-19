class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int row = img.size();
        int col = img[0].size();
        vector<vector<int>> smoothed(row, vector<int>(col));

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                int sum = 0;
                int count = 0;

                for (int ni = max(0, i - 1); ni <= min(row - 1, i + 1); ++ni) {
                    for (int nj = max(0, j - 1); nj <= min(col - 1, j + 1); ++nj) {
                        sum += img[ni][nj];
                        ++count;
                    }
                }

                smoothed[i][j] = floor(static_cast<double>(sum) / count);
            }
        }

        return smoothed;
    }
};
