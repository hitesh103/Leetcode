class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
    int size = letters.size(), i;
    for (i = 0; i < size; ++i) {
        if (letters[i] > target) {
            return letters[i];
        }
    }
    return letters[0];
    }
};