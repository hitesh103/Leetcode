class Solution {
public:

    void permutations(vector<vector<int>> &ans, vector<int> ds, vector<int> &freq, vector<int> &nums){
        
        // Base Case
        if(ds.size() == nums.size()){
            ans.push_back(ds);
            return;
        }

        // Use an empty array to map the element
        for(int i = 0; i < nums.size(); i++){
            if(freq[i] == 0){
                ds.push_back(nums[i]);
                freq[i] = 1;
                permutations(ans, ds, freq, nums);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        vector<int> ds;
        vector<int> freq(n, 0);
        permutations(ans, ds, freq, nums);
        return ans;
    }
};
