class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longestStreak = 0;

        for (int num : numSet) {
            if (numSet.find(num - 1) == numSet.end()) {  // Check if num is the start of a streak
                int currentNum = num;
                int currentStreak = 1;

                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentStreak++;
                    currentNum++;
                }

                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
