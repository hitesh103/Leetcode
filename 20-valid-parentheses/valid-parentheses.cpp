class Solution {
public:
    unordered_map<char, int> symbols = {{'(', -1}, {'[', -2}, {'{', -3}, {')', 1}, {']', 2}, {'}', 3}};

    bool isValid(string s) {
        stack<int> st;

        for (char bracket : s) {
            if (symbols[bracket] < 0) {
                st.push(bracket);
            } else {
                if (st.empty()) {
                    return false;
                }
                char top = st.top();
                st.pop();
                if (symbols[bracket] + symbols[top] != 0) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
