class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;

        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }

        if (sum % 3 != 0) {
            return false;
        }

        int partitionSum = sum / 3;
        int count = 0;
        int currentSum = 0;

        for (int i = 0; i < n - 1; i++) {
            currentSum += arr[i];

            if (currentSum == partitionSum) {
                count++;
                currentSum = 0;
            }
            
            // If we have found two partitions with equal sum,
            // the third partition is guaranteed to have the same sum.
            if (count == 2) {
                return true;
            }
        }

        return false;
    }
};
