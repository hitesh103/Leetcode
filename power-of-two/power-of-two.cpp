class Solution {
public:

    bool isPowerOfTwo(int n) {
        //Base Condn
        if(n == 0){
            return false;
        }

       return ((n==1) || (n%2==0 && isPowerOfTwo(n/2)));
    }
};