class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int countOfOne = 0;
        int maxCountOfOneS = 0;

        // Iterating through whole array.
        for(int i=0;i<n;i++){

            // Taking count of 1 ( as countOfOne) untill 0 or end of array comes.
            if(nums[i] == 1){
                countOfOne++;
            } 

        // If 0 comes or end of array we take the max of our one's count(countOfOne) as maxCountOfOneS.
            if(nums[i]==0 || i == n-1){
             maxCountOfOneS = max(maxCountOfOneS,countOfOne);
             countOfOne = 0;
            }
        }

        return maxCountOfOneS;
    }
};