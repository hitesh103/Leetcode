class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        // first create the unorderedmap with value as vector
        unordered_map<string,vector<string>> mp;

        // store the sorted str as key so every time same str will be added to sorted str which is key
        for( auto& str : strs){
            string s = str;
            sort(s.begin(),s.end());
            mp[s].push_back(str);
        }

        // push the vector values of mp to ans
        vector<vector<string>> ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }

        // return it.
        return ans;
        
    }
};