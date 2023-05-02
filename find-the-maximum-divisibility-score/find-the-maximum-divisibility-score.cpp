class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int n = nums.size();
        int m = divisors.size();
        int c = INT_MIN;
        

        for(int i=0;i<m;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums[j] % divisors[i] == 0){
                    cnt++;
                }
            }
            c = max(cnt,c);
        }

        int ans = INT_MAX;
        for(int i=0;i<m;i++){
            int cnt = 0;
            for(int j=0;j<n;j++){
                if(nums[j] % divisors[i] == 0){
                    cnt++;
                }
            }
            if(c==cnt){
                ans = min(ans,divisors[i]);
            }
        }
    
    return ans;
   }
};