class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans; // To store the list of missing numbers

        // First Pass: Mark the presence of numbers
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1; // Get the index (0-based) of the current number
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx]; // Negate the value at the index to mark its presence
            }
        }

        // Second Pass: Find missing numbers
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                ans.push_back(i + 1); // If the value is positive, the index + 1 is a missing number
            }
        }

        return ans;
    }
};
