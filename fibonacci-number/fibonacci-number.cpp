class Solution {
public:
    int fib(int n) {
        //Base Case
        if(n==0){
            return 0;
        }else if(n==1){
            return 1;
        }
        // Main Code
       return fib(n-1)+fib(n-2);
    }
};