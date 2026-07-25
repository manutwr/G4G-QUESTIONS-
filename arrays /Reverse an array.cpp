class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        int left = 0; // left ko 0 se start kro
        int right = arr.size() - 1; // array ka last element 
        
        while (left < right) { // ab tak right bada nii hojata left me 
            swap(arr[left], arr[right]); // swap maar do
            
            
            left++; // left pointer ko ++ kr do
            right--; // right pointer ko -- kr do
        }
    }
};
