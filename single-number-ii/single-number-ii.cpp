class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> mp;

        for (auto i : nums) {
            mp[i]++;
        }

        for (auto x : mp) {
            if (x.second < 3) { 
                return x.first; 
            }
        }

        return 0;
    }
};
