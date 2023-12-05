class Solution {
public:
    string largestGoodInteger(string num) {

        int n = num.length();
        vector<int> maap(10, 0);

        int count = 1;

        for(int i=0;i<n;i++){
            if(num[i] == num[i+1]){
                count++;
            }else if(num[i] != num[i+1]){
                if(count >= 3){
                    maap[num[i] - '0'] += count;
                }
                count = 1;
            }
        }

        if (count >= 3) {
            maap[num[n - 1] - '0'] += count;
        }

        for(int i = 9; i >= 0; i--){
            if(maap[i] != 0){
                if(i == 0){
                    return "000";
                }
                int ans = 111 * i;
                return to_string(ans);
            }
        }

        return "";

    }
};