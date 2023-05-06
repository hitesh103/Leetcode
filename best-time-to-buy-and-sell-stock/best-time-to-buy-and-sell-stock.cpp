class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int buy_Value = INT_MAX;
        int maxProfit = 0;

        // Iterate through vector and take min as buy_value and 
        for(int i=0;i<n;i++){
            buy_Value = min(buy_Value,nums[i]);
            //  take buy_value differance to nums[i] and take its make because we want max profit
            maxProfit = max(maxProfit,nums[i]-buy_Value);
        }
        return maxProfit;
    }
};