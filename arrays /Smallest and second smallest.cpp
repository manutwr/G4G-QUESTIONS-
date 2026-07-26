class Solution {
  public:
    vector<int> minAnd2ndMin(vector<int> &arr) {
        // Edge case: less than 2 elements
        if (arr.size() < 2) {
            return {-1};
        }
        
        int smallest = INT_MAX;
        int secondSmallest = INT_MAX;
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < smallest) {
                secondSmallest = smallest;
                smallest = arr[i];
            } 
            else if (arr[i] < secondSmallest && arr[i] != smallest) {
                secondSmallest = arr[i];
            }
        }
        
        // If secondSmallest was never updated, a valid second element doesn't exist
        if (secondSmallest == INT_MAX) {
            return {-1};
        }
        
        return {smallest, secondSmallest};
    }
};
