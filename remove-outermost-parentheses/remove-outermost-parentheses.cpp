class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        int leftCount = 0;
        int rightCount = 0;
        string ans = "";
        int idx1=0;

        for(int i=0;i<n;i++){
            if(s[i] == '('){
                leftCount++;
            }else if(s[i] == ')'){
                rightCount++;
            } 

            if(leftCount == rightCount){
                for(int j=idx1+1;j<i;j++){
            ans.push_back(s[j]);
         }
                idx1= i+1;
            }
        
        }



        return ans;
    }
};