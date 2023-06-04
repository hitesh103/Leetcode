class Solution {
public:

        vector<vector<int>> ans;
        vector<int> ds;

    void allSubsets(int ind,vector<int> &nums,int n){
        //Base Condition
        if(ind == n){
            ans.push_back(ds);
            return;
        }

        // Not Include ith element ,i is ind
        allSubsets(ind+1,nums,n);

        //Include ith element
        ds.push_back(nums[ind]);
        allSubsets(ind+1,nums,n);
        ds.pop_back(); // Backtrack call
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        allSubsets(0,nums,n);
        return ans;
    }
};