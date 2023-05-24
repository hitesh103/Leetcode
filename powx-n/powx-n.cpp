class Solution {
public:
    double myPow(double a, int n) {
        double result = 1;
        long long b = n;
        if(b<0) b = -1 * b;

        while(b){
            if(b%2 == 1){ 
                result = result * a;
                b = b-1;
            }else{
                a = a * a;
                b = b/2;
            }
        }

        if(n<0) return 1/abs(result);

        return result;
    }
};