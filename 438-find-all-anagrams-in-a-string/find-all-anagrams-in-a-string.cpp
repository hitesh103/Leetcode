class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int s_len = s.length(), p_len = p.length();
        if (p_len > s_len) return {};

        unordered_map<char, int> p_freq, window_freq;
        vector<int> result;

        // Initialize frequency maps
        for (int i = 0; i < p_len; ++i) {
            p_freq[p[i]]++;
            window_freq[s[i]]++;
        }

        // Check first window
        if (p_freq == window_freq)
            result.push_back(0);

        // Use sliding window with pointers
        int left = 0, right = p_len;
        while (right < s_len) {
            window_freq[s[right]]++;      // Add new character on right
            window_freq[s[left]]--;       // Remove old character on left
            if (window_freq[s[left]] == 0)
                window_freq.erase(s[left]); // Clean up

            left++; right++;

            if (window_freq == p_freq)
                result.push_back(left);
        }

        return result;
    }
};
