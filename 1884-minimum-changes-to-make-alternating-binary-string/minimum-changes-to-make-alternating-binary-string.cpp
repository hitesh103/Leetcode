class Solution {
public:
    int minOperations(string s) {
        int n = s.length();
        int ans1 = 0, ans2 = 0;

        for (int i = 0; i < n; ++i) {
            // Check for starting with '0'
            if (i % 2 == 0) {
                if (s[i] != '0') {
                    ans1++;
                }
            } else {
                if (s[i] != '1') {
                    ans1++;
                }
            }

            // Check for starting with '1'
            if (i % 2 == 0) {
                if (s[i] != '1') {
                    ans2++;
                }
            } else {
                if (s[i] != '0') {
                    ans2++;
                }
            }
        }

        // Return the minimum of the two possibilities
        return min(ans1, ans2);
    }
};
