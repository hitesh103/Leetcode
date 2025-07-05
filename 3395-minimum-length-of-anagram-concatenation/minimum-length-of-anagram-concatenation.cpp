class Solution {
public:
    unordered_map<char,int> getFreq(string &s){
        unordered_map<char,int> freq;
        for (char c : s) {
            freq[c]++;
        }
        return freq;
    }

    int minAnagramLength(string s) {
        int n = s.length();

        for (int i = 1; i <= n; i++) {
            if (n % i != 0) continue;

            string base = s.substr(0, i);
            unordered_map<char,int> baseFreq = getFreq(base);
            bool allMatch = true;

            for (int j = i; j < n; j += i) {
                string chunk = s.substr(j, i);
                if (getFreq(chunk) != baseFreq) {
                    allMatch = false;
                    break;
                }
            }

            if (allMatch) return i;
        }

        return n;
    }
};
