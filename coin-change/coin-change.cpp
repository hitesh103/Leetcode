class Solution {
public:
    int hp[10010]; // Memoization array(DP Array)

    // Recursive function to calculate the minimum number of coins needed
    int recursCoinChange(vector<int> coins, int amount) {
        if (amount == 0) return 0; // Base case: amount is zero, no coins needed
        if (hp[amount] != -1) return hp[amount]; // Return memoized result if available

        long long ans = INT_MAX; // Minimum number of coins needed, initialized to maximum value

        for (int coin : coins) {
            if (amount - coin >= 0)
                ans = min(ans + 0LL, recursCoinChange(coins, amount - coin) + 1LL); // Calculate minimum coins recursively
        }

        return hp[amount] = ans; // Memoize result and return
    }

    // Entry point function for coinChange calculation
    int coinChange(vector<int>& coins, int amount) {
        memset(hp, -1, sizeof(hp)); // Initialize memoization array with -1
        int ans = recursCoinChange(coins, amount); // Calculate minimum coins needed
        return ans == INT_MAX ? -1 : ans; // Return result or -1 if not possible
    }
};
