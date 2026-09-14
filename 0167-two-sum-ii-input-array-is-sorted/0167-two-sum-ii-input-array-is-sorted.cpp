// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         vector<int> ans(2);
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             for(int j = i + 1; j < n; j++){
//                 if(nums[i] + nums[j] == target){
//                     ans[0] = i+1;
//                     ans[1] = j+1;
//                 }
//             }
//         }
//         return ans; // TC = O(n^2).
//     }
// };
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans(2);
        int n = nums.size();
        int i = 0,j = n-1;
        while(i < j){
            int sum = nums[i]+nums[j];
            if(sum > target){
                j--;
            }else if(sum < target){
                i++;
            }else{
                return {i+1, j+1};
            }
        }
        return {}; // TC = O(n).
    }
};