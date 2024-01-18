class Solution {
public:
    int climbStairs(int n) {
        int val1 = 1;
        int val2 = 1;

        for (int i = 0; i < n - 1; i++) {
            int temp = val1;
            val1 = val1 + val2;
            val2 = temp;
        }
        return val1;
    }
};
