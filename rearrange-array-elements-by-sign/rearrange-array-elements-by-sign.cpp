class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

    // Here we'll manke only one vector of n size and with only 0s
        vector<int> ans(n, 0);

    // taking two vaiable to count positive and negative index
        int positiveElementIndex = 0, negativeElementIndex = 1;

    //iterating through whole vector and taking positive index bu default 0.
    //so,first element will be positive  and negativeindex to 1 so 2nd element will be negative

        for(auto num : nums){
            if(num > 0){
                ans[positiveElementIndex] = num;
                // increasing index by two 
                positiveElementIndex += 2;
            }
            else if(num < 0){
                ans[negativeElementIndex] = num;
                // increasing index by two 
                negativeElementIndex += 2;
            }
        }
        return ans;
    }
};