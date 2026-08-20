class Solution {
  public:
    bool isPossible(vector<int>& arr) {
        // code here
        long long sum = 0;
        for (int i=0 ; i< arr.size(); i++){
            sum = sum + arr[i];  // adding 
        }
         if (sum%3 == 0){
             return true;
         }
         else {
             return false;
         }
    }
};
