class Solution {
public:
    void sortInWave(vector<int>& arr) {
        // Fix: Use arr.size() to get the length of the array
        int n = arr.size(); 

        // Fix: Ensure standard for-loop syntax with semicolons
        for (int i = 0; i < n - 1; i += 2) {
            // Swap adjacent elements
            swap(arr[i], arr[i + 1]);
        }
    }
};
