class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        map<char, int> mpp;
        int ans = 0;
        int i = 0;
        int j = 0;

        while (j < n) {
            if (mpp.find(s[j]) != mpp.end()) {
                mpp.erase(s[i]);
                i++;
            } else {
                mpp[s[j]]++;
                j++;
                ans = max(ans, j - i);
            }
        }

        return ans;
    }
};
