class Solution {
public:
    bool isPalindrome(string s) {

        // Two Pointer Approch
        // Used `isalnum()` function to check if the character is alphanumeric (letters or digits) and skipped non-alphanumeric characters while comparing the characters. This ensures that spaces and commas are ignored.

        int start = 0;
        int end = s.length() - 1;
        transform(s.begin(), s.end(), s.begin(), ::tolower);

        while (start < end) {
            while (start < end && !isalnum(s[start])) {
                start++;
            }
            while (start < end && !isalnum(s[end])) {
                end--;
            }

            if (s[start] != s[end]) {
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};
