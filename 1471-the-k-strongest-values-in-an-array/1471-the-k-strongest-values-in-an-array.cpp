class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();

        sort(arr.begin(), arr.end());

        int centre = arr[(n-1) / 2];

        int left = 0;
        int right = n - 1;

        vector<int> ans;

        while(ans.size() < k) {
            int leftStrength = abs(arr[left] - centre);
            int rightStrength = abs(arr[right] - centre);

            if(rightStrength >= leftStrength) {
                ans.push_back(arr[right]);
                right--;
            }
            else {
                ans.push_back(arr[left]);
                left++;
            }
        }

        return ans;
    }
};