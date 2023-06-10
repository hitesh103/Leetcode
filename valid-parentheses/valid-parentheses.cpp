class Solution {
public:
    unordered_map<char, int> symbols = {{'(', -1}, {'{', -2}, {'[', -3}, {')', 1}, {'}', 2}, {']', 3}};
    bool isValid(string s) {
        stack<char> st;

        for (auto brackets : s) {
            if (symbols[brackets] < 0) {
                st.push(brackets);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                st.pop();
                if (symbols[top] + symbols[brackets] != 0) {
                    return false;
                }
            }
        }

        return st.empty();
    }
};
