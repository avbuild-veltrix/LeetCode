class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int high, low, mid;
        high = nums.size() - 1;
        low = 0;
        while(low <= high){
            mid = (high + low)/2;
            if(nums[mid] > target){
                high = mid - 1;
            }else if(nums[mid] < target){
                low = mid + 1;
            }else{
                return mid;
            }
        }
        return low;
    }
};