class Solution {
public:

    //Binary Search

    vector<int> twoSum(vector<int>& numbers, int target) {
        int n = numbers.size();

        for (int i = 0; i < n - 1; i++) {
            int targetDiff = target - numbers[i];
            int index2 = binarySearch(numbers, targetDiff, i + 1, n - 1);
            
            if (index2 != -1) {
                return {i + 1, index2 + 1}; // Return 1-based indices as required.
            }
        }

        return {}; // If no solution is found, return an empty vector.
    }

private:
    int binarySearch(const vector<int>& numbers, int target, int left, int right) {
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (numbers[mid] == target) {
                return mid;
            } else if (numbers[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return -1; // If target is not found, return -1.
    }
};