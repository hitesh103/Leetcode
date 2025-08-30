class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
        int size = nums.length;
        int maxConsecutiveOnes = 0;
        int onesCount = 0;
        
        for(int i = 0;i<size;i++){
            if(nums[i] == 1){
                onesCount++;
            }else{
                onesCount = 0;
            }
            
            maxConsecutiveOnes = Math.max(onesCount,maxConsecutiveOnes);
        }

        return maxConsecutiveOnes;

    }
}