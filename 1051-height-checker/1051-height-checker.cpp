class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int n = heights.size();
        int count = 0;
        vector<int> sortHeight = heights;
        sort(sortHeight.begin(), sortHeight.end());
        for(int i = 0; i < n; i++){
            if(heights[i] != sortHeight[i]){
                count++;
            }
        }
        return count;
    }
};