class Solution {

    public static int[] reverseArray(int startIndex, int endIndex, int[] arr) {
        if (startIndex < 0 || endIndex >= arr.length || startIndex > endIndex) return arr;

        int left = startIndex, right = endIndex;
        while (left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
            left++;
            right--;
        }
        return arr;
    }

    public void rotate(int[] nums, int k) {
        int n = nums.length;
        if (n == 0) return;

        k = k % n;          // handle k > n
        if (k == 0) return; // no-op

        // reverse whole, then first k, then the rest
        reverseArray(0, n - 1, nums);
        reverseArray(0, k - 1, nums);
        reverseArray(k, n - 1, nums);
    }
}
