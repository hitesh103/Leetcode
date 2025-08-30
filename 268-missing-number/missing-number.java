class Solution {
    public int missingNumber(int[] nums) {
        int size = nums.length;
        HashSet<Integer> set = new HashSet<>();

        // Put all elements into the set
        for (int num : nums) {
            set.add(num);
        }

        // Check which number from 0 to n is missing
        for (int i = 0; i <= size; i++) {
            if (!set.contains(i)) {
                return i;
            }
        }
        return -1;
    }
}
