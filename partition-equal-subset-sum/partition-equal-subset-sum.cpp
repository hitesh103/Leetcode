class Solution {
public:

    bool isSubsetPossible(vector<int> &nums, int n, int sum){
        bool hp[n+1][sum+1];

        //Intitalization
        for(int i=0;i<=n;i++){
            for(int j=0;j<=sum;j++){
                if(i == 0){
                    hp[i][j] = false;
                }
                if(j == 0){
                    hp[i][j] = true;
                }
            }
        }

        for(int i=1;i<=n;i++){
            for(int j=1;j<=sum;j++){
                if(nums[i-1] <= j){
                    hp[i][j] = hp[i-1][j-nums[i-1]] || hp[i-1][j];
                }else{
                    hp[i][j] = hp[i-1][j];
                }
            }
        }

        return hp[n][sum];
    }

    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sums = 0;

        for(int i=0;i<n;i++){
            sums = sums + nums[i];
        }

        if(sums % 2 != 0){
            return false;
        }else{
            return isSubsetPossible(nums,n, sums/2);
        }
    }
};