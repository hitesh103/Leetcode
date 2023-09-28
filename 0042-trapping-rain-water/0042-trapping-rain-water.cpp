class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n < 3)
            return 0;

        vector<int> leftMax(n, 0);
        vector<int> rightMax(n, 0);

        int left_max = height[0];
        int right_max = height[n - 1];

        for (int i = 0; i < n; i++) {
            leftMax[i] = left_max;
            left_max = max(left_max, height[i]);
        }

        for (int i = n - 1; i >= 0; i--) {
            rightMax[i] = right_max;
            right_max = max(right_max, height[i]);
        }

        int trappedWater = 0;

        for (int i = 0; i < n; i++) {
            int minMax = min(leftMax[i], rightMax[i]);
            if (minMax > height[i])
                trappedWater += minMax - height[i];
        }

        return trappedWater;
    }
};