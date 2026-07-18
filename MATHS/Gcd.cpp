class Solution {
  public:
    int gcd(int a, int b) {
        // code here
      while (a>0 && b>0 ){// check if a and b greater then 0
          if (a>b){ // agar a bada hai b se 
          a = a%b ; // then a hojayega a%b 
          }
          else {
              b = b%a ; // agar a chote hai 
          }
          
          }
          if (a== 0) return b; // agaar a zero hai to ans b ho jayega 
          return a; // agar b = 0 hai to and a ho jayega 
      }
    
};
