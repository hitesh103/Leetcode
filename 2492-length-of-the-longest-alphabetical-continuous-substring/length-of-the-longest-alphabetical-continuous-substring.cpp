class Solution {
public:
    int longestContinuousSubstring(string s) {
        int n = s.length();
        int i = 0, j = 1;
        int ans = 0, count = 0;

        while (i < n && j < n) {
            int a = s[i] - 'a';
            int b = s[j] - 'a';

            if (a + 1 == b) {
            count++;
            } else {
            if (count > ans) {
                ans = count;
            }
            count = 0;
            }
            i++;
            j++;
        }

        if (count > ans) {
            ans = count;
        }

        return ans+1;

    }
};