class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int ans = 0;
        map<char, int> count;

        for(int i = 0; i < chars.length(); i++){
            count[chars[i]]++; 
        }

        for(int i = 0; i < words.size(); i++){

            int wordLen = words[i].length();

            map<char, int> currCount = count; 

            int j;
            for(j = 0; j < wordLen; j++){
                if(currCount[words[i][j]] <= 0){
                    break;
                }
                currCount[words[i][j]]--; 
            }
            
            if(j == wordLen){
                ans += wordLen; 
            }
            
            count = {};
            for(int i = 0; i < chars.length(); i++){
                count[chars[i]]++;
            }
        }
        return ans;
    }
};