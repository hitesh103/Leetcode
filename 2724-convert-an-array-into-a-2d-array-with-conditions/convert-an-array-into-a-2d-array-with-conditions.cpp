class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {

        int n = nums.size();
        int freq[201] = {0};

        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }

        int mxx = INT_MIN;
        for(int i = 0; i < 201; i++) {
            mxx = max(mxx, freq[i]);
        }

        vector<vector<int>> ans(mxx);

        for(int i = 1; i <= mxx; i++) {
            for(int j=0;j<201;j++){
                if(freq[j] > 0){
                    ans[i-1].push_back(j);
                    freq[j]--;
                }
            }
        }

        return ans;
    }
};
