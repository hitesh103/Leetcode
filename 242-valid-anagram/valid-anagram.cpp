class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp;

        for (char c : s){
            mp[c]++;
        }

        for(char d : t){
            mp[d]--;
        }

        for(auto it : mp){
            if(it.second != 0) return false;
        }

        return true;
    }
};