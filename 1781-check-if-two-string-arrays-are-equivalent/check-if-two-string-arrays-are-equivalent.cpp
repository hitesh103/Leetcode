#include <vector>
#include <string>

class Solution {
public:
    bool arrayStringsAreEqual(std::vector<std::string>& word1, std::vector<std::string>& word2) {
        string wordOne = "";

        for (int i = 0; i < word1.size(); i++) {
            wordOne.append(word1[i]);
        }

        string wordTwo = "";

        for (int i = 0; i < word2.size(); i++) {
            wordTwo.append(word2[i]);
        }

        return wordOne == wordTwo;
    }
};
