class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);  // Initialize the answer array with 1s.

        int suffix = 1;  // Initialize a variable to keep track of suffix product.
        for (int i = 0; i < n; i++) {
            ans[i] *= suffix;  // Update answer with suffix product so far.
            suffix *= nums[i];  // Update suffix product for the next element.
        }

        int prefix = 1;  // Initialize a variable to keep track of prefix product.
        for (int i = n - 1; i >= 0; i--) {
            ans[i] *= prefix;  // Update answer with prefix product so far.
            prefix *= nums[i];  // Update prefix product for the next element.
        }

        return ans;  // Return the final product array.
    }
};
