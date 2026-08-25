class Solution {
  public:
    int mean(vector<int>& arr) {
        // code here
        int sum = 0;
        int n = arr.size();
        for (int i= 0 ; i< n ; i++){
            sum = sum + arr[i];
            
        }
        return sum/n;
    }

    int median(vector<int>& arr) {
        // code here
        int n = arr.size();
        sort(arr.begin(), arr.end());
        if (n % 2 != 0) {
            return arr[n / 2];
        }
        return (arr[(n / 2)-1] + arr[n/2])/2;
    }
};
