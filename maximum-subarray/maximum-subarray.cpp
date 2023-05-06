class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        // Kadane's Algorithm

        int n  = nums.size();
        int maxSum = INT_MIN;
        int currentSum = 0;

        // Iterating though nums and taking currentSum
        for(int i=0;i<n;i++){

            currentSum  =  currentSum + nums[i];

        // Taking max of every currentSum
            maxSum = max(currentSum, maxSum);

        // If due to -values if currentSum  <  0 , then make it 0 
            if(currentSum < 0){
                currentSum = 0;
            }

        }

        return maxSum;
    }
};