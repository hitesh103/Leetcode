class Solution {
public:
    long long minCost(vector<int>& nums, vector<int>& cost) {
        int n = nums.size(),
            l = 1, r = 1e6,
            mid;
        long long temp;

        while( l<=r ) {
            mid = l+(r-l)/2;
            
            // temp will be used to find what will be the cost difference 
            // if I take mid+1 instead of mid as the target value.
            // This is like the derivative discussed in the above explanation.
            temp = 0;

            for( int i=0; i<n; i++ ) {
                // if target is lesser than value, increasing target reduces cost 
                // because target is on the left side of val, whiich has -1 slope
                if( mid < nums[i] ) temp-=cost[i]; 
                
                // if target is not lesser than value, increasing target increases cost 
                // because target is on the right side of val, whiich has +1 slope
                else temp+=cost[i];
            }

            //    if moving target to target+1 reduces cost,
            // the target value for min cost lies on the 
            // right side of current target
            //    else we search on the left
            if( temp <0 ) l = mid+1;
            else r = mid-1;
        }
        // imagine the target for min cost is x
        // if l == r == x, mid = x which makes the gradient positive
        // so, when the loop is exited, r=x-1 and l = x

        // loop to calculate actual cost for the target value
        temp = 0;
        for( int i=0; i<n; i++ ) {
            temp += (long long)abs( nums[i]-l ) * cost[i];
        }
        
        return temp;
    }
};