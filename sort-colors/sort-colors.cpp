class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n = nums.size();
        int redCount =0,whiteCount=0,blueCount= 0;

        // We are taking count of 0,1 and 2
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                redCount++;
            }
            if(nums[i]==1){
                whiteCount++;
            }
            if(nums[i]==2){
                blueCount++;
            }
        }

        // We are puting 0,1 and 2 accourding to there count 
        for(int i =0;i<n;i++){
            if(i<redCount){
                nums[i]=0;
            }
            else if(i>=redCount && i<redCount+whiteCount){
                nums[i]=1;
            }
            else{
                nums[i]=2;
            }
        }

    }
};