class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<bool> rows(m, false);
        vector<bool> columns(n, false);

        for(int i = 0; i < m; i++){
            for(int j = 0 ; j < n; j++){
                if(matrix[i][j] == 0){
                    rows[i] = true;
                    columns[j] = true;
                }
            }
        }
        // Setting Rows to zero
        for(int i = 0; i < m; i++){
            if(rows[i] == true){
                for(int j = 0; j < n; j++){
                    matrix[i][j] = 0;
                }
            }
        }

        // Setting Columns to zero
        for(int i = 0; i < n; i++){
            if(columns[i] == true){
                for(int j = 0; j < m; j++){
                    matrix[j][i] = 0;
                }
            }
        }
    }
};