class Solution {
public:
    bool isPowerofTwo(int n) {
        if (n <= 0) {  // if n is smalller 
            return false;  
        }
  
      while  (n%2 == 0){  // if n iss divisble by 2 
          n=n/2; //  
      }
       return n==1;
    }
};
