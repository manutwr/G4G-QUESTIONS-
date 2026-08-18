class Solution {
public:
    bool divby13(string &s) {
        int remainder = 0; // didgit by digit checking

        for (char c : s) { // loop 
          
            int digit = c - '0'; // convert into digit

            remainder = (remainder * 10 + digit) % 13 ; // checking digit by digit on loop 
        }

       
        return remainder == 0; // agar finalremaind ki value 0 ho gyi to loop return maar dena 
    }
};
 
