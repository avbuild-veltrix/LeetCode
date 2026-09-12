class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        int n = arr.size();

        // 1. Sort the array
        sort(arr.begin(), arr.end());

        // 2. Find the median
        int median = arr[(n - 1) / 2];

        // 3. Two pointers
        int left = 0;
        int right = n - 1;

        vector<int> ans;
        ans.reserve(k);

        // 4. Pick the k strongest values
        while (ans.size() < k) {

            int leftStrength = abs(arr[left] - median);
            int rightStrength = abs(arr[right] - median);

            // If equal strength, choose the larger value
            if (rightStrength >= leftStrength) {
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