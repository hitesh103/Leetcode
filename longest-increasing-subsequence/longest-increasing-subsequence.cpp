class Solution {
public:

    int hp[2515];
    int lis(int i,vector<int>& nums){
        if(hp[i] != -1) return hp[i];
        int ans = 1;
        for(int j=0;j<i;++j){
            if(nums[i]>nums[j]){
                ans = max(ans,lis(j,nums)+1);
            }
        }
        return hp[i] = ans;
    }

    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        memset(hp,-1,sizeof(hp));
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,lis(i,nums));
        }
        return ans;
    }
};