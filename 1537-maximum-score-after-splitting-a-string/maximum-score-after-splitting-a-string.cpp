class Solution {
public:
    int maxScore(string s) {
        int n = s.length();
        int zeroCount = 0;
        int oneCount = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] - '0' == 0) {
                zeroCount++;
            } else {
                oneCount++;
            }
        }

        if (zeroCount == 0 || oneCount == 0) {
            return n - 1;
        }

        int ans = 0;
        int zeroS = 0;
        int oneS = 0;

        // Iterate from the second character to the second-to-last character becausee we have to split in two parts and at last character we can not split so we'll itereate to second last only
        for (int i = 0; i < n - 1; i++) {
            if (s[i] - '0' == 0) {
                zeroS++;
            } else {
                oneS++;
            }

            // Update the maximum score
            ans = max(ans, zeroS + (oneCount - oneS));
        }

        return ans;
    }
};
