class Solution {
public:
    string largestGoodInteger(string num) {

        int n = num.length();
        int count = 1;
        int maxDigit = -1;

        for (int i = 0; i < n ; i++) {
            if (num[i] == num[i + 1]) {
                count++;
            } else {
                if (count >= 3 && (num[i] - '0') > maxDigit) {
                    maxDigit = num[i] - '0';
                }
                count = 1;
            }
        }



        if (maxDigit == -1) {
            return "";
        }

        if (maxDigit == 0) {
            return "000";
        }

        return to_string(111 * maxDigit);

    }
};