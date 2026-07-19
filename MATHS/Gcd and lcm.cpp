class Solution {
public:
    // Helper function to calculate GCD using Euclidean algorithm
    int findGcd(int a, int b) {
        while (a>0 && b>0 ){
            if (a>b){
                a= a%b;
            }
            else {
                b= b%a;
            }
            
        }
          if (a==0)return b; // iss statement ko hamesha loop ke bhr rkhna hai 
            return a;
        
        // for finding gcd 
    }

    vector<int> lcmAndGcd(int a, int b) {
        int gcd = findGcd(a, b);
        
        // Calculate LCM using long long to avoid any potential overflow
        int  lcm = (a * b) / gcd;
        
        // Return as an array containing [LCM, GCD]
        return {(int)lcm, gcd};
    }
};
