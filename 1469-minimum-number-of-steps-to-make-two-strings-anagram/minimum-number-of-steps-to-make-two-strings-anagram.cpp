class Solution {
public:
    int minSteps(string s, string t) {
        int n = s.length();
        unordered_map<char,int> freq_s,freq_t;
        
        for (char c : s) freq_s[c]++;
        for (char b : t) freq_t[b]++;

        int steps = 0;
        for( auto& [ch ,cnt] : freq_t){
            if(freq_s.find(ch) != freq_s.end()){
                if(cnt > freq_s[ch]){
                    steps += cnt - freq_s[ch];
                }
            } else {
                steps += cnt;
            }
        }

        return steps;

    }
};