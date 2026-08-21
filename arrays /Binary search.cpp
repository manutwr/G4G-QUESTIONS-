class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        int start = 0;  // stat from 0
        int end = arr.size() - 1; // end from arr-1

        while (start <= end ) { // jb tk end bada na ho jaye strat ke
            int mid = start + (end - start) / 2;// mid calculation

            if (arr[mid] == k) { // agar elemen mid hi hai to 
                return true;
            }
            else if (arr[mid] < k) { // agar target mid se bada hai
                start = mid + 1;// to mid+1 s3 start kr do
            }
            else { 
                end = mid - 1; // agar mid se chooto ha to mid-1 se start krna hai 
            }
        }

        return false;
    }
};
