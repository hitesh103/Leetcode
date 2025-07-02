class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output_preffix(n,1);
        vector<int> output_suffix(n,1);
        vector<int> output(n,1);

        //calculate prefix sum
        int prefix = 1;
        for(int i =0;i<n;i++){
            output_preffix[i] = prefix;
            prefix *= nums[i];
        }

        int suffix = 1;
        for(int i=n-1;i>=0;i--){
            output_suffix[i] = suffix;
            suffix *= nums[i];
        }


        for(int i = 0 ;i <n;i++){
            output[i] = output_suffix[i] * output_preffix[i];
        }

        return output;

    }
};