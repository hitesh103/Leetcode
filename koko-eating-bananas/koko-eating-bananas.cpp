class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n  = piles.size();
        int lo = 1;
        int hi = *max_element(piles.begin(),piles.end());
        int mid;
        int ans;

        while(lo<=hi){
            mid = lo +(hi-lo)/2;
           long long int cnt = 0;
            for(int i=0;i<n;i++){
                int x = piles[i]/mid;
                if(piles[i]%mid != 0){
                    x++;
                }
                cnt += x;
            }
            if(cnt <= h){
                hi = mid-1;
                ans = mid;
            }else{
                lo = mid+1;
            }

        }
        return ans;
    }
    
};