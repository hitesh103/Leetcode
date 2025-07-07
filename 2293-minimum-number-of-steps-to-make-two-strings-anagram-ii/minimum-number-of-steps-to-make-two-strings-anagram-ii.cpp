class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> s_freq, t_freq;
        int ans = 0;

        // Count frequency of each character in both strings
        for(char c : s) s_freq[c]++;
        for(char c : t) t_freq[c]++;

        // Check characters in s
        for(auto& it : s_freq){
            char ch = it.first;
            int freq_in_s = it.second;
            int freq_in_t = t_freq[ch]; // if not found, defaults to 0

            ans += abs(freq_in_s - freq_in_t);
            t_freq.erase(ch); // avoid double counting
        }

        // Check remaining characters only in t
        for(auto& it : t_freq){
            ans += it.second;
        }

        return ans;
    }
};
