class Solution {
public:

    double recursemyPow(double a, long long b){
        if(b<0){
            return 1/recursemyPow(a,-b);
        }else if(b==0){
            return 1.0;
        }else if(b%2 == 1){
            return a*recursemyPow(a,b-1);
        }else{
            return recursemyPow(a*a,b/2);
        }
        return 1.0;
    }

    double myPow(double a, int n) {
        long long b = n;
        return recursemyPow(a,b);
    }
};