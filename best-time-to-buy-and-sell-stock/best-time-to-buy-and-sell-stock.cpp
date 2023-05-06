class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int buy_Value = INT_MAX;
        int maxProfit = 0;

        for(int i=0;i<n;i++){
            buy_Value = min(buy_Value,nums[i]);
            maxProfit = max(maxProfit,nums[i]-buy_Value);
        }
        return maxProfit;
    }
};