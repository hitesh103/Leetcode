class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);

        int left = 0; 
        int right = n - 1; 
        int index = n - 1; 

        while (left <= right) {
            int leftSquared = nums[left] * nums[left];
            int rightSquared = nums[right] * nums[right];

            if (leftSquared > rightSquared) {
                result[index--] = leftSquared;
                left++;
            } else {
                result[index--] = rightSquared;
                right--;
            }
        }

        return result;
    }
};
