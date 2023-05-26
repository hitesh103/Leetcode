class Solution {
public:
    int myAtoi(string s) {
        int n = s.length();
        int ans = 0;
        int sign = 1;
        int i = 0;

        // Ignore leading whitespace characters
        while (i < n && s[i] == ' ') {
            i++;
        }

        // Check for optional sign character
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // Process digits
        while (i < n && isdigit(s[i])) {
            // Check for overflow
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && (s[i] - '0') > INT_MAX % 10)) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            
            // Accumulate the current digit
            ans = ans * 10 + (s[i] - '0');
            i++;
        }

        return ans * sign;
    }
};
