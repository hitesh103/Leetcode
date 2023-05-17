class Solution {
public:
    int mySqrt(int x) {
        if(x<=0){
            return x;
        }
        
        int first = 1,last = x;
        int ans = 0;
        
        while(first<=last){
            int mid = first + (last-first)/2;
            
            if(mid == x/mid){
                return mid;
            }else if (mid < x/mid){
                ans = mid;
                first = mid+1;
            }else{
                last = mid-1;
            }
        }
        return ans;
    }
};