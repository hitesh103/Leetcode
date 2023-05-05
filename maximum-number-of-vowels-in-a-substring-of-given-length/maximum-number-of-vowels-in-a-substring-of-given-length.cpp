class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int i = 0, j = i+k-1;
        int maxVowelCount = 0;
        int currVowelCount = 0;

        // Compute vowel count for the first substring
        for(int l=i; l<=j; l++){
            if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u'){
                currVowelCount++;
            }
        }
        maxVowelCount = currVowelCount;

        // Move the sliding window
        while(j < n-1){
            if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u'){
                currVowelCount--;
            }
            i++;
            j++;
            if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
                currVowelCount++;
            }
            maxVowelCount = max(maxVowelCount, currVowelCount);
        }
        return maxVowelCount;
    }
};
