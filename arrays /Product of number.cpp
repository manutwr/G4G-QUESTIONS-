class Solution {
  public:
    long long int product(vector<int> &arr) {
        // code here
        long long product = 1;
        long long mod = 1000000007;
        for (int i = 0; i< arr.size();  i++ ){
            product = (product *arr [i])% mod ;
            
        }
          return product;
    }
  
};
