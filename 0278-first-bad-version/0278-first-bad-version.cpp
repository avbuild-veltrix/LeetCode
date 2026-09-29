// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int first = 0, last = n-1;
        int mid = 0;
        while(first <= last){
            mid = first + (last - first)/2;

            if(isBadVersion(mid)){
                last = mid - 1;
            }else{
            first = mid + 1;
            }
        }
        return first;
    }
};