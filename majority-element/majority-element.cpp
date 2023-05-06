class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int majorityCount = 0;

        if(n == 1){
            return nums[0];
        }

        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(nums[i] == nums[i+1]){
                majorityCount++;
            }else{
                majorityCount = 0;
            }

            if(majorityCount == n/2){
                return nums[i];
            }
        }
        return 0;
    }
};