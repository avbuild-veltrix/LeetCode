// class Solution {
// public:
//     double myPow(double x, int n) {
//         return pow(x, n);
//     }
// };

class Solution {
public:

    double Power(double a, long long b) {

        if(b == 0) {
            return 1;
        }

        double half = Power(a, b / 2);

        if(b % 2 == 0) {
            return half * half;
        }
        else {
            return a * half * half;
        }
    }

    double myPow(double a, int b) {

        long long n = b;

        if(n < 0) {
            return 1 / Power(a, -n);
        }

        return Power(a, n);
    }
};