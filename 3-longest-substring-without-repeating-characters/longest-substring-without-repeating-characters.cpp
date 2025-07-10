class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_map<char,int> mp;
        int maxString = 0;

        int left = 0,right=0;
        while(right<n){
            mp[s[right]]++;
            while(mp[s[right]] > 1){
                mp[s[left]]--;
                left++;
            }
            maxString = max(maxString,right-left+1);
            right++;
        }
        return maxString;
    }
};