class Solution {
public:
    bool isAnagram(string s, string t) {
        int n = s.length();
        int m = t.length();
        map<char,int> m1;

        for(int i=0;i<n;i++){
            m1[s[i]]++;
        }

        for(int i=0;i<m;i++){
            m1[t[i]]--;
        }

        for(auto it : m1){
            if(it.second != 0){
                return false;
            }
        }

        return true;
    }
};