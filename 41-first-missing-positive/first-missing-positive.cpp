class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n  = nums.size();
        int containsOne = 0;

        // Return 1 if one is not present.
        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                containsOne = 1;
                break;
            }
        }

        if(containsOne == 0){
            return 1;
        }

        // Marking all non positive and greater than array length to 1 ;
        for(int i=0;i<n;i++){
            if(nums[i] <= 0 || nums[i] > n){
                nums[i] = 1;
            }
        }

        // using element as index and then marking them with negetive value 
        for(int i=0;i<n;i++){
            int idx = abs(nums[i]);

            if(idx == n){  // for last we are storing it to first coz array are zero indexed and positive numbers start from the 1st, so we can use 0 idx.
                nums[0] = -abs(nums[0]);
            }else{
                nums[idx] = -abs(nums[idx]);
            }
        }
        // for(int i=0;i<n;i++){
        //     cout<<nums[i]<<endl;
        // }

        // and check if any element is greater than 0 
        for(int i=1;i<n;i++){
            if(nums[i] > 0){
                return i;
            }
        }
        if(nums[0]>0)
        return n;
        return n+1;
    }
};