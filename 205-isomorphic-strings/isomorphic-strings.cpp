class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int length = s.length();

        if (length != t.length()) {
            return false;
        }

        unordered_map<char, char> sToTMap;  // Mapping from characters in s to characters in t
        unordered_map<char, char> tToSMap;  // Mapping from characters in t to characters in s

        for (int i = 0; i < length; i++) {
            char charS = s[i];
            char charT = t[i];

            // Check for mapping consistency
            if (sToTMap.find(charS) != sToTMap.end() && sToTMap[charS] != charT) {
                return false;
            }
            if (tToSMap.find(charT) != tToSMap.end() && tToSMap[charT] != charS) {
                return false;
            }

            // Establish the mappings
            sToTMap[charS] = charT;
            tToSMap[charT] = charS;
        }

        return true;
    }
};