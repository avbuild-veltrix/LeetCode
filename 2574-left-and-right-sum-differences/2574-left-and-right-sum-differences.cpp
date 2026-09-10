class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> rightSum = {};
        vector<int> leftSum = {};
        vector<int> answer = {};
        int rSum = 0, lSum = 0;
        for(int i = nums.size()-1; i >= 0; i--){
            rightSum.insert(rightSum.begin(), rSum);
            rSum += nums[i];
        }
        for(int i = 0; i < nums.size(); i++){
            leftSum.push_back(lSum);
            lSum += nums[i];
        }
        int ans = 0;
        for(int i = 0; i < rightSum.size(); i++){
            ans = abs(rightSum[i] - leftSum[i]);
            answer.push_back(ans);
        }
        return answer;
    }
};