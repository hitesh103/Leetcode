class Solution {
    public int removeDuplicates(int[] nums) {
        if(nums.length <= 1) return nums.length;
        int n = nums.length;
        int j=0;
        int ind = 0;

        while(j<n){
            if(nums[ind] != nums[j]){
                ind++;
                nums[ind] = nums[j];
            }
            j++;
        }

        return ind+1;

    }
}