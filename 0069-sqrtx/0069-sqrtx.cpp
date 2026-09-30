// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x == 0 || x == 1)
//             return x;

//         int start = 1;
//         int end = x;

//         while (start <= end) {
//             int mid = start + (end - start) / 2;

//             long long square = 1LL * mid * mid;

//             if (square == x)
//                 return mid;

//             else if (square < x)
//                 start = mid + 1;

//             else
//                 end = mid - 1;
//         }

//         return end;
//     }
// };
// class Solution {
// public:
//     long long mySqrt(long long x) {
//         long long high = x, low = 0,mid;
//         long long ans = 0;

//         while(low <= high){
//             mid = (low + high)/2;
//             if(mid * mid <= x){
//                 ans = mid;
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }
// };

// class Solution {
// public:
//     long long mySqrt(long long x) {
//         for(long long i = 0; i <= x; i++){
//             if(i*i == x){
//                 return i;
//             }
//             if(i*i > x){
//                 return i-1;
//             }
//         }
//         return 0;
//     }
// };


// class Solution {
// public:
//     long long mySqrt(long long x) {
//         long long high = x, mid, low = 0;
//         long long ans = 0;

//         while(low <= high){
//             mid = (low + high)/2;
//             if(mid * mid <= x){
//                 ans = mid;
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     long long mySqrt(long long x) {
//         long long high = x, low = 0, mid;
//         long long ans = 0;
//         while(low <= high){
//             mid = low + (high - low)/2;
//             if(mid*mid <= x){
//                 ans = mid;
//                 low = mid + 1;
//             }else{
//                 high = mid - 1;
//             }
//         }
//         return ans;
//     }
// };


class Solution {
public:
    long long mySqrt(long long x) {
        long long high = x, low = 0, mid;
        long long ans = 0;
        while(low <= high){
            mid = low + (high - low)/2;
            if(mid * mid <= x){
                ans = mid;
                low = mid + 1;
            }else{
                high = mid - 1;
            }
        }
        return ans;
    }
};