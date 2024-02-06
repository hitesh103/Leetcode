class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string,vector<string>> anagrams;
        
        for(int i=0;i<n;i++){
            string temp_s = strs[i];
            sort(temp_s.begin(),temp_s.end());
            anagrams[temp_s].push_back(strs[i]);
        }

        vector<vector<string>> ans;

        for(auto i : anagrams){
            ans.push_back(i.second);
        }

        return ans;

    }
};