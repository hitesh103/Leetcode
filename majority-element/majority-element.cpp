class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n =nums.size();
        int majorityCount = 0;

        // Edge case if only one element then return it
        if(n == 1){
            return nums[0];
        }

        // sort the vector
        sort(nums.begin(),nums.end());

        // taking th countof majority and comparing it with n/2 and make count zero for other element count
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