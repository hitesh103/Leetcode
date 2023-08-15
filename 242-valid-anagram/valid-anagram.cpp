class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        map<char,int> charCount;

        for(int i=0;i<n;i++){
            charCount[s[i]]++;
        }

        for(int i=0;i<m;i++){
            charCount[t[i]]--;
        }

        for(auto it : charCount){
            if(it.second != 0){
                return false;
            }
        }

        return true;
    }
};