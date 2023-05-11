class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        map<int,int> mp;
        vector<int> ans = nums;
        sort(nums.begin(),nums.end());

        for(int i = n-1;i>=0;i--){
            mp[nums[i]] = i;
        }

        for(int i=0;i<n;i++){
            ans[i]  = mp[ans[i]];
        }

        return ans;
        
    }
};