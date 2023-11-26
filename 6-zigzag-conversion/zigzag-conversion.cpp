class Solution {
public:
    string convert(string s, int numRows) {
        int n = s.length();
        vector<char> ans;
        ans.reserve(s.size());

        if(numRows==1){
            return s;
        }

        for(int i=0;i<numRows;i++){
            int southElements = 2 * (numRows-1 - i);
            int northElements = 2 * (i);
            int idx = i;
            int isGoingDown = true;

            while(idx < s.length()){

                ans.push_back(s[idx]);

                if(i==0){
                    idx += southElements;
                }else if(i == numRows-1){
                    idx += northElements;
                }else{
                    if(isGoingDown){
                        idx += southElements;
                    }else{
                        idx += northElements;
                    }
                }

                isGoingDown = !isGoingDown; 

            }

        }
        return string(ans.begin(),ans.end());
    }
};