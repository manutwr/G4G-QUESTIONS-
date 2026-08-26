 class Solution {
public:
    int countDigits(int n) {
      
        if (n == 0) return 1; // base case

        int count = 0; // count e 0 daalo
        while (n > 0) { // agar 0 chhota hai n se
            count++; // count ko aage badhao
            n = n / 10; } // n ko 10 se divide kr do har digit ko bhr nikalne ke lie

        return count;
    }
};
