class Solution {
public:

    vector<string> map = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    vector<string> result;

    void f(string &digits,int i, string output){
        //Base Case
        if(i==digits.size()){
            result.push_back(output);
            return;
        }

        int digit = digits[i] - '0';
        string mapping = map[digit];

        for(int j=0;j<mapping.length();j++){
            f(digits,i+1,output+mapping[j]);
        }
    }

    vector<string> letterCombinations(string digits) {
        result.clear();
        if(digits.length() == 0) return result;
        f(digits,0,"");
        return result;
    }
};