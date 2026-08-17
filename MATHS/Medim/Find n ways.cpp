class Solution {
  public:
    int countWays(int n) {
        // code here
        if (n <= 2 ){ // agar n 2 se chhota hai seedhi  se km hai to n hi combinations bnenge
            return n ;
        }
        int  a= 1, b = 2; // a aur b ko value assign kro 
        for (int i = 3 ; i <= n; i++){
            int c = a + b ; // c ka mtlb n-1 tk + n-2 tk kr steps ko add krna 
            a =b; // a me b ko ddaal do
            b=c; // b me c ko 
            
        }
        return b;
    }
};
