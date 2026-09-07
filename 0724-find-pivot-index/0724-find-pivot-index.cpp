class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totalSum = 0;
        for(int i = 0; i < nums.size(); i++){
            totalSum+= nums[i];
        }
        int leftMost = 0, rightMost = totalSum;
        for(int i = 0; i < nums.size(); i++){
            if(leftMost == totalSum - leftMost - nums[i]){
                return i;
            }
            leftMost += nums[i];
        }
        return -1;
    }
};