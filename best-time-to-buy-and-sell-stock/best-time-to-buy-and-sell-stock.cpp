class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int mini = INT_MAX;
        int diff = 0;

        for(int i=0;i<n;i++){
                mini = min(mini,arr[i]);
                diff = max(diff,arr[i]-mini);
        }
        return diff;

    }
};