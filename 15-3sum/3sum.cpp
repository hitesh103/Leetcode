
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>>st;

        for(int i=0;i<n;i++){
            int start = i+1;
            int end = n - 1;

            while(start < end){
                if(nums[i]+nums[start]+nums[end] < 0){
                    start++;
                }else if(nums[i]+nums[start]+nums[end]>0){
                    end--;
                }else{
                    if(!st.count({nums[i],nums[start],nums[end]}))
                    {
                        ans.push_back({nums[i],nums[start],nums[end]});
                    }
                    st.insert({nums[i],nums[start],nums[end]});
                    start++;
                    end--;
                }
            }
          
        }
        return ans;
    }
};