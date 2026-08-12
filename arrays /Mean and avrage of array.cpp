class Solution {
  public:
    int findMean(vector<int>& arr) {
        long long sum = 0;
        int n = arr.size();
        
        for (int i = 0; i < n; i++) {
            sum += arr[i];
        }
        
        return sum / n;  // when you find sum you have to find mean by dividig sum by n 
    }
};
