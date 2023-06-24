class Solution {
public:
    int countCombinations(int targetAmount, const vector<int>& coinDenominations) {
        int numCoins = coinDenominations.size();
        vector<vector<int>> hp(numCoins + 1, vector<int>(targetAmount + 1, 0));

        // Base case: If targetAmount is 0, there is always 1 combination (empty set)
        for (int i = 0; i <= numCoins; i++) {
            hp[i][0] = 1;
        }

        // Calculate the number of combinations for each coin denomination
        for (int i = 1; i <= numCoins; i++) {
            for (int j = 1; j <= targetAmount; j++) {
                // If the current coin denomination can be used
                if (coinDenominations[i - 1] <= j) {
                    // Add the number of combinations with and without using the current coin
                    hp[i][j] = hp[i - 1][j] + hp[i][j - coinDenominations[i - 1]];
                } else {
                    // If the current coin denomination is too large, exclude it
                    hp[i][j] = hp[i - 1][j];
                }
            }
        }

        // Return the total number of combinations
        return hp[numCoins][targetAmount];
    }

    int change(int amount, const vector<int>& coins) {
        return countCombinations(amount, coins);
    }
};
