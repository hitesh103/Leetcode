import java.util.*;

class Solution {
    public int singleNumber(int[] nums) {
        int size = nums.length;
        Arrays.sort(nums);

        for (int i = 0; i < size - 1; i += 2) {
            if (nums[i] != nums[i + 1]) {
                return nums[i];
            }
        }
        return nums[size - 1]; // last element is unique
    }
}
