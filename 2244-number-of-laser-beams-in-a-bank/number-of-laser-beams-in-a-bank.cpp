class Solution {
public:

    int countBeam(string &str) {
        int cnt = 0;
        for (char c : str) {
            if (c == '1') {
                cnt++;
            }
        }
        return cnt;
    }


    int numberOfBeams(vector<string>& bank) {
        int ans = 0, prevBeams = 0; 

        for (int i = 0; i < bank.size(); i++) {
            int currBeams = countBeam(bank[i]);
            if (currBeams > 0) {
                ans += prevBeams * currBeams;
                prevBeams = currBeams;
            }
        }

        return ans;
    }
};
