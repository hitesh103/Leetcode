class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        if(n==0){
            return 0;
        }
        int current_count = 1;
        int max_count = 1;
        for(int i = 0; i < n-1; i++ ){
            if(nums[i] == nums[i+1]){
                continue;
            }
            if(nums[i+1] == nums[i]+1){
                current_count++;
                max_count = max(max_count,current_count);
            }
            else{
                current_count = 1;
            }
        }
        return max_count;
    }
};