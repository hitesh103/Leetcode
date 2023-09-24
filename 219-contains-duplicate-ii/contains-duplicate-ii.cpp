class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> mep;

        for(int i=0;i<n;i++){
            if(mep.find(nums[i]) != mep.end()){
                if(i - mep[nums[i]] <= k) return true;
            }
            mep[nums[i]] = i;
        }
        return false;
    }
};