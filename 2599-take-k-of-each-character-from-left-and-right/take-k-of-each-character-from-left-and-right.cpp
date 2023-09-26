class Solution {
public:
    int takeCharacters(const std::string& s, int k) {
        int n = s.length();  // Get the length of the input string.
        int ans = n;  // Initialize the answer to the length of the string.
        std::vector<int> count(3, 0);  // Initialize a count vector for each character type (a, b, c).

        // Count the occurrences of each character (a, b, c) in the string.
        for (char c : s)
            ++count[c - 'a'];

        // Check if any character occurs less than k times; if so, it's impossible to form a valid substring.
        if (count[0] < k || count[1] < k || count[2] < k)
            return -1;

        // Iterate through the string using a sliding window approach to find the minimum length substring.
        for (int l = 0, r = 0; r < n; ++r) {
            // Decrement the count of the character at the right end of the window.
            --count[s[r] - 'a'];

            // Move the left end of the window until the substring satisfies the condition.
            while (count[s[r] - 'a'] < k)
                ++count[s[l++] - 'a'];

            // Update the minimum length found so far.
            ans = std::min(ans, n - (r - l + 1));
        }

        return ans;  // Return the minimum length of the valid substring.
    }
};
