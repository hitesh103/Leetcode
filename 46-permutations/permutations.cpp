class Solution {
public:

    void permutations(int ind,vector<vector<int>> &ans,vector<int> &nums){
        
        // Base Case
        if(ind == nums.size()){
            ans.push_back(nums);
            return;
        }

        // swaping the nummber using the loop
        for(int i = ind; i < nums.size(); i++){
                swap(nums[ind],nums[i]);
                permutations(ind+1,ans,nums);
                swap(nums[ind],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        permutations(0,ans,nums);
        return ans;
    }
};