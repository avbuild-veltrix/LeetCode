//FIRST METHOD.
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             nums[i] = nums[i] * nums[i];
//         }
//         sort(nums.begin(), nums.end());
//         return nums;
//     }
// };

// SECOND METHOD.
// class Solution {
// public:
//     vector<int> sortedSquares(vector<int>& nums) {
//         int n = nums.size();
//         for(int i = 0; i < n; i++){
//             nums[i] = nums[i] * nums[i];
//         }
//         for(int i = 1; i < n; i++){
//             int j = i; 
//             while(j > 0 && nums[j] < nums[j-1]){
//                 swap(nums[j], nums[j-1]);
//                 j--;
//             }
//         }
//         return nums;
//     }
// };

// THIRD METHOD.
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> neg = {};
        vector<int> pos = {};
        vector<int> ans = {};
        for(int i = 0; i < n; i++){
            if(nums[i] >= 0){
                pos.push_back(nums[i]);
            }else{
                neg.push_back(nums[i]);
            }
        }
        for(int i = 0; i < neg.size(); i++){
            neg[i] = neg[i]*neg[i];
        }
        reverse(neg.begin(), neg.end());
        for(int i = 0; i < pos.size(); i++){
            pos[i] = pos[i]*pos[i];
        }
        int i = 0, j = 0;
        int a = neg.size();
        int b = pos.size();
        while(i < a && j < b){
            if(neg[i] < pos[j]){
                ans.push_back(neg[i]);
                i++;
            }else{
                ans.push_back(pos[j]);
                j++;
            }
        }
        while(i < a){
            ans.push_back(neg[i]);
            i++;
        }
        while(j < b){
            ans.push_back(pos[j]);
            j++;
        }
        return ans;
    }
};