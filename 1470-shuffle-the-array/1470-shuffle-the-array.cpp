class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n){
        vector<int>vec;
        for(int i=0;i<(nums.size()/2);i++){
            vec.push_back(nums[i]);
            vec.push_back(nums[n]);
            n++;
    }
    return vec;}
};