class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
         
       vector<int>res;
       unordered_map<int ,int>mp;
       
       for(int i = 0 ; i < nums.size() ; i++) {
           int diff = target - nums[i];
           
		   // check if the diff is already present in the hashmap or not.
           if(mp.find(diff) != mp.end()) {
               res.push_back(mp[diff]);
               res.push_back(i);
               return res;
           }
           
		   // if not,stored the ele and index in the hashmap.
           mp[nums[i]] = i;
       }
      return res;
 
    }
};