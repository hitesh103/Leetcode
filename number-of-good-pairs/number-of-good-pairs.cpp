class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int  n = nums.size();
        map<int,int> mp;
        int cnt = 0;
        
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        for(int i=0;i<n;i++){
            if(mp[nums[i]]>1){
                cnt = cnt + (mp[nums[i]]-1);
                mp[nums[i]]--;
            }
        }
        return cnt;
    }
};