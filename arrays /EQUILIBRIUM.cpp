class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        // code here
    
     long long total_sum = 0;
        for (int num : arr) {
            total_sum += num;
        }

        long long left_sum = 0;

        for (int i = 0; i < arr.size(); ++i) {
            // Right sum is total sum minus left sum minus current element
            long long right_sum = total_sum - left_sum - arr[i];

            if (left_sum == right_sum) {
                return i; // Found the first equilibrium point
            }

            left_sum += arr[i];
        }

        return -1; // No equilibrium point found
    }
    };
