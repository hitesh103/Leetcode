class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> avgs(n, -1);
        vector<long long> prefixSum(n + 1, 0);

        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + nums[i];
        }

        for (int i = 0; i < n; ++i) {
            if (i - k >= 0 && i + k < n) {
                long long sum = prefixSum[i + k + 1] - prefixSum[i - k];
                avgs[i] = sum / (2 * k + 1);  // Integer division
            }
        }

        return avgs;
    }
};
