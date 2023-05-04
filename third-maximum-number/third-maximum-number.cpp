class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int cnt =0;
        // Sort the vector first
        sort(nums.begin(), nums.end());
    
        // Use unique to remove duplicates
        auto it = unique(nums.begin(), nums.end());
    
        // Resize the vector to remove the duplicates
        nums.resize(distance(nums.begin(), it));

        int n = nums.size();
        
        if(n<3){
            return nums[n-1];
        }

        return nums[n-3];
    }
};