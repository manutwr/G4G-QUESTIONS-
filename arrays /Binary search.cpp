class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        int start = 0;  // stat from 0
        int end = arr.size() - 1; // end from arr-1

        while (start <= end ) { // jb tk end bada na ho jaye strat ke
            int mid = start + (end - start) / 2;// mid calculation

            if (arr[mid] == k) {
                return true;
            }
            else if (arr[mid] < k) {
                start = mid + 1;
            }
            else {
                end = mid - 1;
            }
        }

        return false;
    }
};
