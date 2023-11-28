class Solution {
public:
    string intToRoman(int num) {
        vector<pair<int, string>> romanMap{
                {1, "I"}, {4, "IV"}, {5, "V"}, {9, "IX"}, {10, "X"}, {40, "XL"}, 
                {50, "L"}, {90, "XC"}, {100, "C"}, {400, "CD"}, {500, "D"}, 
                {900, "CM"}, {1000, "M"}
            };
            
            int mapIndex = romanMap.size() - 1;
            string romanNumeral = "";
            
            while (num != 0) {
                while (romanMap[mapIndex].first > num) {
                    mapIndex--;
                }
                
                romanNumeral += romanMap[mapIndex].second;
                num -= romanMap[mapIndex].first;
            }
            
            return romanNumeral;
    }
};
