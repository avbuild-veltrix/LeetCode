// class Solution {
// public:
//     vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
//         vector<int> answer = {};
//         for(int i = 0; i < nums.size(); i++){
//             int count = 0;
//             for(int j = 0; j < nums.size(); j++){
//                 if(nums[j] < nums[i]){
//                     count++;
//                 }
//             }
//             answer.push_back(count);
//         }
//         return answer;
//     }
// };

class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> count(101, 0);
        vector<int> answer;

        for(int x : nums){
            count[x]++;
        }

        for(int i = 1; i < 101; i++){
            count[i] += count[i-1];
        }

        for(int x : nums){
            if(x == 0){
                answer.push_back(0);
            }else{
                answer.push_back(count[x-1]);
            }
        }
        return answer;
    }
};