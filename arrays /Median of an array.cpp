class Solution {
public:
    double findMedian(vector<int> &arr) {
        
        sort(arr.begin(), arr.end()); // sort an array
        
        int n = arr.size(); // size declear 
        
        
        if (n % 2 != 0) { // agar array odd hai to arr n/2 return kro
            return arr[n / 2];
        }
    
        return (arr[(n / 2) - 1] + arr[n / 2]) / 2.0; // agar array even hai to -1 kro
    }
};
