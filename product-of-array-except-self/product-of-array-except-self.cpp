class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefixProductFromStart(n);
        vector<int> prefixProductFromEnd(n);
        vector<int> ans(n);

        prefixProductFromStart[0] = nums[0];
        for(int i = 1; i < n; i++){
            prefixProductFromStart[i] =  prefixProductFromStart[i-1] * nums[i];
        }

        prefixProductFromEnd[n-1] = nums[n-1];
        for(int i = n-2; i >= 0; i--){
            prefixProductFromEnd[i] = prefixProductFromEnd[i+1] * nums[i];
        }

        ans[0] = prefixProductFromEnd[1];
        ans[n-1] = prefixProductFromStart[n-2];
        for(int i = 1; i < n-1; i++){
            ans[i] = prefixProductFromStart[i-1] * prefixProductFromEnd[i+1];
        }

        return ans;
    }
};
