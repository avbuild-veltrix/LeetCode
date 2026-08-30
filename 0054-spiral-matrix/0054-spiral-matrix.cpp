class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> arr;

        int min_r = 0, min_c = 0;
        int max_c = matrix[0].size() - 1;
        int max_r = matrix.size() - 1;

        while(min_r <= max_r && min_c <= max_c) {

            // Left → Right
            for(int i = min_c; i <= max_c; i++) {
                arr.push_back(matrix[min_r][i]);
            }
            min_r++;

            // Top → Bottom
            for(int i = min_r; i <= max_r; i++) {
                arr.push_back(matrix[i][max_c]);
            }
            max_c--;

            // Right → Left
            if(min_r <= max_r) {
                for(int i = max_c; i >= min_c; i--) {
                    arr.push_back(matrix[max_r][i]);
                }
                max_r--;
            }

            // Bottom → Top
            if(min_c <= max_c) {
                for(int i = max_r; i >= min_r; i--) {
                    arr.push_back(matrix[i][min_c]);
                }
                min_c++;
            }
        }

        return arr;
    }
};