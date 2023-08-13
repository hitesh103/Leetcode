class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        // Create an unordered set to efficiently check for the presence of elements
        unordered_set<int> numSet(nums.begin(), nums.end());

        int longestStreak = 0;

        // Iterate through each number in the set
        for (int num : numSet) {
            // Check if the number is the start of a streak (i.e., no num-1 is present in the set)
            if (numSet.find(num - 1) == numSet.end()) {
                int currentNum = num;
                int currentStreak = 1;

                // Count the length of the current streak by incrementing the current number
                while (numSet.find(currentNum + 1) != numSet.end()) {
                    currentStreak++;
                    currentNum++;
                }

                // Update the longest streak if the current streak is longer
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
