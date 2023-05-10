class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.length();
        int m = t.length();

        if (n != m) {
            return false;
        }

        unordered_map<char, char> st_map; // mapping from s to t
        unordered_map<char, char> ts_map; // mapping from t to s

        for (int i = 0; i < n; i++) {
            char s_char = s[i];
            char t_char = t[i];

            if (st_map.count(s_char)) {
                if (st_map[s_char] != t_char) {
                    return false;
                }
            } else {
                st_map[s_char] = t_char;
            }

            if (ts_map.count(t_char)) {
                if (ts_map[t_char] != s_char) {
                    return false;
                }
            } else {
                ts_map[t_char] = s_char;
            }
        }

        return true;
    }
};
