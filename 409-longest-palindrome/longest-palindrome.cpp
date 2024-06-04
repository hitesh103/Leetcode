class Solution {
public:
    int longestPalindrome(string s) {
        int n = s.length();
        unordered_map<char,int> mp;

        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }

        int ans = 0;
        bool odd_found = false;

        for(auto it = mp.begin(); it != mp.end(); ++it){
            if(it->second % 2 == 0){
                ans += it->second;
            } else {
                ans += it->second - 1;
                odd_found = true;
            }
        }

        if(odd_found) ans++;

        return ans;
    }
};
