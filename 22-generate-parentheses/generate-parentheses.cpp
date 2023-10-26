class Solution {
public:

    vector<string> ans;

    void f(int n , int open , int close, string output){
        if(open == n && close == n){
            ans.push_back(output);
            return;
        }

        if(open < n){
            f(n, open + 1, close, output + "(");
        }
        if(close < open){
            f(n, open, close + 1, output + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        string output;
        f(n, 0, 0, output);
        return ans;
    }
};
