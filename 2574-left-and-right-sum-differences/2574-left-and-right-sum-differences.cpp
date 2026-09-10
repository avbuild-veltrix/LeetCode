class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int> rightSum = {};
        vector<int> leftSum = {};
        vector<int> answer(n,0);
        int rSum = 0, lSum = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            rightSum.insert(rightSum.begin(), rSum);
            rSum += nums[i];
            answer[i] += rSum;
        }
        for(int i = 0; i < nums.size(); i++){
            leftSum.push_back(lSum);
            lSum += nums[i];
            answer[i] = abs(answer[i] - lSum);
        }
        return answer;
    }
};