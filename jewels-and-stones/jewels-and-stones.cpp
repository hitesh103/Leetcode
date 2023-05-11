class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n = jewels.length();
        int m = stones.length();
        map<char,int> stone;

        for(int i=0;i<m;i++){
            stone[stones[i]]++;
        }

        int count = 0;

        for(int i=0;i<n;i++){
            if(stone.count(jewels[i])>0){
                count += stone[jewels[i]];
            }

        }
        return count;
    }
};