class Solution {
public:
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        int rows = rectangles.size();
        int cols = rectangles[0].size();

        map<double, int> mpp;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols - 1; j++) {
                double divident = (double)rectangles[i][j] / rectangles[i][j + 1];
                mpp[divident]++;
            }
        }

        long long result = 0;
        for (const auto& entry : mpp) {
            int frequency = entry.second;
            // Calculate the number of pairs that can be formed using the frequency of ratios
            result += (static_cast<long long>(frequency) * (frequency - 1)) / 2;
        }

        return result;
    }
};
