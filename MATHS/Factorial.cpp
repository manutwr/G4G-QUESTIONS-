class Solution {
  public:
    int factorial(int n) {
        // code here
        int ans=1 ; // initalise an wih 1 
        for (int i=1 ; i<=n ; i++){ // loop inserion
            ans = ans * i;    // ans insertion
        }
        return ans;
    }
};
