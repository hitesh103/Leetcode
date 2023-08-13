class Solution {
public:
    int leastBricks(vector<vector<int>>& wall) {
        int n = wall.size(); // Total number of rows in the wall
        map<int, int> countGap; // Map to store the frequency of gap positions

        // Iterate through each row of the wall
        for (int i = 0; i < n; i++) {
            int gapSum = 0;
            
            // Iterate through each brick in the current row, except the last one
            for (int j = 0; j < wall[i].size() - 1; j++) {
                gapSum += wall[i][j]; // Calculate the cumulative gap position
                countGap[gapSum]++; // Increment the frequency of the current gap position
            }
        }

        int highestGap = 0; // Variable to store the highest frequency of gap crossings
        
        // Iterate through the gap positions and their frequencies
        for (auto i : countGap) {
            highestGap = max(i.second, highestGap); // Update highestGap if a higher frequency is found
        }

        // Return the minimum number of crossings by subtracting the highest gap frequency from the total number of rows
        return n - highestGap;
    }
};
