class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int n = nums.size();  // Get the number of elements in the array
        int breakPoint = 0;   // Initialize a counter to track the number of breaking points

        for (int i = 0; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) {    // Check if the current element is greater than the next
                breakPoint++;               // Increment the breaking point counter

                if (i > 0 && nums[i - 1] > nums[i + 1]) {
                    // If the element before the current element is also greater than the next
                    nums[i + 1] = nums[i];  // Update the next element to maintain non-decreasing order
                }
            }
        }

        // Check if the number of breaking points is at most 1
        return breakPoint <= 1;
    }
};
