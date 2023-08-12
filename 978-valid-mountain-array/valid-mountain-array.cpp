class Solution {
public:
        bool validMountainArray(vector<int>& arr) {
        // Check if the array has at least 3 elements
        if (arr.size() < 3) {
            return false;
        }
        
        int max = INT_MIN; // Initialize the maximum value to the smallest possible integer
        int mountain = -1; // Initialize the mountain index to an invalid value
        
        // Find the peak (highest point) of the mountain
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > max) {
                max = arr[i];
                mountain = i;
            }
        }
        
        // If the peak is at the beginning or end, it can't be a valid mountain
        if (mountain == 0 || mountain == arr.size() - 1) {
            return false;
        }

        // Check the ascending part of the mountain
        for (int i = 0; i < mountain; i++) {
            if (arr[i] >= arr[i + 1]) { // If the current element is greater than or equal to the next, it's not ascending
                return false;
            }
        }
        
        // Check the descending part of the mountain
        for (int j = mountain + 1; j < arr.size(); j++) {
            if (arr[j] >= arr[j - 1]) { // If the current element is greater than or equal to the previous, it's not descending
                return false;
            }
        }
        
        // If all checks passed, it's a valid mountain array
        return true;
    }
};