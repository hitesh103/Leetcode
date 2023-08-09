class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int totalSum = 0;
        for (int i = 0; i < n; ++i) {
            totalSum += cardPoints[i];
        }

        int windowSize = n - k;
        int windowSum = 0;
        for (int i = 0; i < windowSize; ++i) {
            windowSum += cardPoints[i];
        }

        int minWindowSum = windowSum;
        for (int i = windowSize; i < n; ++i) {
            windowSum = windowSum - cardPoints[i - windowSize] + cardPoints[i];
            minWindowSum = min(minWindowSum, windowSum);
        }

        return totalSum - minWindowSum;
    }
};
