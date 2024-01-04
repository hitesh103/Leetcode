class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;

        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }

        int ans = 0;

        for (auto it = mp.begin(); it != mp.end(); ++it) {
            int i = it->second;
            cout << i << endl;

            if(i == 1){
                return -1;
            }
            if(i == 0) continue;

            if(i % 3 == 1){
                i = i - 4;
                ans += i / 3;
                ans += 2;
            }else if(i % 3 == 2){
                i = i - 2;
                ans += i/3;
                ans += 1;
            }else if(i % 3 == 0){
                ans += i/3;
            }
        }
        return ans;
    }
};