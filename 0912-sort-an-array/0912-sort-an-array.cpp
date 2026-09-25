class Solution {
public:

    // Merge two sorted parts
    void merge(vector<int>& nums, int low, int mid, int high) {

        vector<int> temp;

        int i = low;
        int j = mid + 1;

        // Compare both halves
        while (i <= mid && j <= high) {

            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        // Remaining elements of left half
        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        // Remaining elements of right half
        while (j <= high) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy temp back to nums
        for (int k = 0; k < temp.size(); k++) {
            nums[low + k] = temp[k];
        }
    }


    // Merge Sort
    void mergeSort(vector<int>& nums, int low, int high) {

        // Base case
        if (low >= high)
            return;

        int mid = low + (high - low) / 2;

        // Sort left half
        mergeSort(nums, low, mid);

        // Sort right half
        mergeSort(nums, mid + 1, high);

        // Merge sorted halves
        merge(nums, low, mid, high);
    }


    vector<int> sortArray(vector<int>& nums) {

        mergeSort(nums, 0, nums.size() - 1);

        return nums;
    }
};