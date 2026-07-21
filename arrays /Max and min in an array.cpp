class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        // code here
             int min_val = arr[0];
        int max_val = arr[0];
        
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] < min_val) {
                min_val = arr[i];
            }
            if (arr[i] > max_val) {
                max_val = arr[i];
            }
        }
        
        return {min_val, max_val};

        
    }
};
