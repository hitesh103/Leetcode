class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        int containsOne = 0;

        // Check if the array contains 1
        for (int i = 0; i < n; i++) {
            if (nums[i] == 1) {
                containsOne = 1;
                break;
            }
        }

        // If 1 is not present, the first missing positive is 1
        if (containsOne == 0) {
            return 1;
        }

        // Modify the array to have only positive integers from 1 to n
        for (int i = 0; i < n; i++) {
            if (nums[i] <= 0 || nums[i] > n) {
                nums[i] = 1;
            }
        }

        // Use negative values to mark presence of elements
        for (int i = 0; i < n; i++) {
            int val = abs(nums[i]);

            if (val == n) {
                nums[0] = - abs(nums[0]);
            } else {
                nums[val] = - abs(nums[val]);
            }
        }

        // Find the first missing positive by checking unmarked indices
        for (int i = 1; i < n; i++) {
            if (nums[i] > 0) {
                return i;
            }
        }

        // If all indices are marked, n+1 is the first missing positive
        if (nums[0] > 0) {
            return n;
        }

        return n + 1;
    }
};
