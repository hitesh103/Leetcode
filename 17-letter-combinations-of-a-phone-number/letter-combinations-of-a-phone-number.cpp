class Solution {
public:

    vector<string> ans;
    vector<string> characters = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    void combination(string &digits,int n,string s){
        //Base case
        if(n==digits.size()){
            ans.push_back(s);
            return;
        }

        int digit = digits[n]-'0';

        for(char ch : characters[digit]){
            s.push_back(ch);
            combination(digits,n+1,s);
            s.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {
        int n = 0;
        string s;
        if(digits=="") return {};
        combination(digits,0,s);
        return ans;
    }
};