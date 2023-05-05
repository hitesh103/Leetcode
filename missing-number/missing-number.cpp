class Solution {
public:
    int missingNumber(vector<int>& nums) {
  
        int N = nums.size();
        int Totalsum = (N*(N+1))/2;
        int Currentsum =0;

        for(int i =0;i<N;i++){
           Currentsum+=nums[i];
        }

        return Totalsum-Currentsum;
    }
};