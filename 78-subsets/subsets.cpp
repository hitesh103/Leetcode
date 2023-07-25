class Solution {
public:

    vector<vector<int>> ans;
    void recursion(vector<int> &nums,int i,vector<int> temp){
        //Base Case
        if(i==nums.size()){
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[i]);
        recursion(nums,i+1,temp);
        temp.pop_back();
        recursion(nums,i+1,temp);
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;
        recursion(nums,0,temp);
        return ans;
    }
};