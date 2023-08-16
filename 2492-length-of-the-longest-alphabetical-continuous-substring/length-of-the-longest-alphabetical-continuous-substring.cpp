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
                ans = max(ans,count);
                count = 0;
            }
            i++;
            j++;
        }

        ans = max(ans,count);

        return ans+1;

    }
};