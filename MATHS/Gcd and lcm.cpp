class Solution {
public:
    // Helper function to calculate GCD using Euclidean algorithm
    int findGcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    vector<int> lcmAndGcd(int a, int b) {
        int gcd = findGcd(a, b);  // calling the gcd function 
        
        // Calculate LCM using long long to avoid any potential overflow
        int  lcm = (a * b) / gcd;
        
        // Return as an array containing [LCM, GCD]
        return {(int)lcm, gcd};
    }
};
