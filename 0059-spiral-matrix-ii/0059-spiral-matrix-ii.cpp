class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int min_r = 0, min_c=0;
        int max_r = n-1;
        int max_c = n-1;
        vector<vector<int>> arr(n, vector<int>(n));
        int a = 1;
        while(min_r <= max_r && min_c <= max_c){
            for(int i = min_c; i <= max_c; i++){
                arr[min_r][i] = a;
                a++;
            }
            min_r++;

            for(int i = min_r; i <= max_r; i++){
                arr[i][max_c] = a;
                a++;
            }
            max_c--;

            for(int i = max_c; i >= min_c; i--){
                arr[max_r][i] = a;
                a++;
            }
            max_r--;

            for(int i = max_r; i >= min_r; i--){
                arr[i][min_c] = a;
                a++;
            }
            min_c++;
        } 
        return arr;
    }
};