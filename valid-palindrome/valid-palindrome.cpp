class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
        string ans = "";
        for(int i=0;i<n;i++){
            if(s[i]>='a' and s[i]<='z' || s[i]>='A' and s[i]<='Z' ){
                ans.push_back(tolower(s[i]));
            }
            else if(s[i]>='0' and s[i]<='9'){
                ans.push_back(s[i]);
            }
        }
        int start = 0, end = ans.size()-1;
        while(start<=end){
            if(ans[start++] != ans[end--]){
                return false;
            }
        }
        return true;
    }
};