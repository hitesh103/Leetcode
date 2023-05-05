class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int total1 = 0;

        for(int i=0;i<n;i++){
            if(nums[i] == 1){
                cnt++;
            } 
            
            if(nums[i]==0 || i == n-1){
             total1 = max(total1,cnt);
             cnt = 0;
            }

            
            
        }

        return total1;
    }
};