class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> counts(26, 0);
        
        // Initialize Character Counts Array
        for (char ch : chars) {
            counts[ch - 'a']++;
        }

        int result = 0;

        // Check Words
        for (const string& word : words) {
            if (canForm(word, counts)) {
                // Step 4: Calculate Lengths
                result += word.length();
            }
        }

        return result;
    }

    bool canForm(const std::string& word, std::vector<int>& counts) {
        std::vector<int> c(26, 0);

        // Update Counts Array
        for (char ch : word) {
            int x = ch - 'a';
            c[x]++;
            if (c[x] > counts[x]) {
                return false;
            }
        }

        return true;
    }
};