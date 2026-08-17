class Solution {
  public:
    // Helper function to calculate GCD using the Euclidean algorithm
    int gcd(int a, int b) {
      while (a > 0 && b > 0){ // a aur b ko 0 se bada hona cahaiye 
          if (a > b ){ // agar a bada hai b se 
              a = a % b ; // then a mod b 
          }
          else {
              b = b % a ; // nii to b mod a 
          }
      }
      if (a == 0) return b; // agar a zero ke eqal hai to b return krdo 
      return a; // agar b zero ke eqal hai to a return kr do 
    }

    int lcm(int a, int b) { // lcm function banao
       
        return (a / gcd(a, b)) * b; // gcd ko call kro aur lcm ka formula maaro  
    }
};
