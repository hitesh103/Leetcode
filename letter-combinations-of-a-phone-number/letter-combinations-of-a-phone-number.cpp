class Solution {
public:

    vector<string> a = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;

    void combinations(int i,string &digits, int n ,string &s){
        //Base Condn
        if(i==n){
            ans.push_back(s);
            return;
        }

        int digit = digits[i]-'0';

        for(char ch : a[digit]){
            s.push_back(ch);
            combinations(i+1,digits,n,s);
            s.pop_back();
        }

    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()) return ans;
        int n = digits.size();
        string s;
        combinations(0,digits,n,s);
        return ans;
    }
};