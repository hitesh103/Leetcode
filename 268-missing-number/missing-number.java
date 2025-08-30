import java.util.Arrays;

class Solution {
    public int missingNumber(int[] nums) {
        int size = nums.length;
        Arrays.sort(nums);

        // Case when 0 is missing
        if (nums[0] != 0) return 0;

        for (int i = 0; i < size - 1; i++) {
            if (nums[i+1] != nums[i] + 1) {
                return nums[i] + 1;
            }
        }

        // Case when last number (n) is missing
        return size;
    }
}
