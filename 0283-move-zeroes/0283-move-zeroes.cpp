class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int e = 0;

        for(int f = 0; f < nums.size(); f++) {
            if(nums[f] != 0) {
                nums[e] = nums[f];
                e++;
            }
        }

        while(e < nums.size()) {
            nums[e] = 0;
            e++;
        }
    }
};