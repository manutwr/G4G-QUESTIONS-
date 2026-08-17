class Solution {
  public:
    // Helper function to calculate GCD using the Euclidean algorithm
    int gcd(int a, int b) {
      while (a > 0 && b > 0){
          if (a > b ){
              a = a % b ;
          }
          else {
              b = b % a ;
          }
      }
      if (a== 0) return b;
      return a;
    }

    int lcm(int a, int b) {
       
        return (a / gcd(a, b)) * b;
    }
};
