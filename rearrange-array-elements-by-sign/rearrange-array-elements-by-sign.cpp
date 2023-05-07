class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

    // First, we separate the positive and negative numbers in two arrays
    int n = nums.size();
    int pos[n], neg[n];
    int pos_count = 0, neg_count = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] >= 0) {
            pos[pos_count++] = nums[i];
            } 
        else {
         neg[neg_count++] = nums[i];
    }

    }

    // Then, we merge the positive and negative arrays alternating their values

    int i = 0, j = 0, k = 0;

    while (i < pos_count && j < neg_count) {
       nums[k++] = pos[i++];
       nums[k++] = neg[j++];
    }

    while (i < pos_count) {
       nums[k++] = pos[i++];
    }

    while (j < neg_count) {
      nums[k++] = neg[j++];
    }
        return nums;
    }
};