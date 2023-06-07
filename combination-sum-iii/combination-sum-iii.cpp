class Solution {
public:
    vector<vector<int>> ans;

    void cS3(vector<int>& arr, vector<int>& ds, int n, int k, int ind) {
        // Base Case
        if (k == 0) {
            if (n == 0) {
                ans.push_back(ds);
            }
            return;
        }

        if (ind < arr.size()) {
        // Not pick
            cS3(arr, ds, n, k, ind + 1);
        // pick
            ds.push_back(arr[ind]);
            cS3(arr, ds, n - arr[ind], k - 1, ind + 1);
            ds.pop_back();
        }
    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        vector<int> ds;
        cS3(arr, ds, n, k, 0);
        return ans;
    }
};
