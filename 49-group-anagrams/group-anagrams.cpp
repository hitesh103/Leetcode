class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();  // Use .size() for vector length
        map<string, vector<string>> mpp;

        // Group anagrams in the map
        for (int i = 0; i < n; i++) {
            string s = strs[i];
            sort(s.begin(), s.end());

            // Insert or append the current string to the anagram group
            mpp[s].push_back(strs[i]);
        }

        // Extract the grouped anagrams from the map
        vector<vector<string>> result;
        for (const auto& pair : mpp) {
            result.push_back(pair.second);
        }

        return result;
    }
};
