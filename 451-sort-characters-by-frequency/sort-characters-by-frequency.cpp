class Solution {
public:
    string frequencySort(string s) {
      unordered_map<char, int> mp;

        for (char c : s) {
            mp[c]++;
        }

        vector<pair<char, int>> freqVector(mp.begin(), mp.end());

        sort(freqVector.begin(), freqVector.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.second > b.second;
        });

        string result;
        for (const auto& pair : freqVector) {
            result.append(pair.second, pair.first);
        }

        return result;
    }
};