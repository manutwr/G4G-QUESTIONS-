class Solution {
  public:
    pair<int, int> countOddEven(vector<int> &arr) {
        // code here
        int odd = 0; // even cont 
        int even = 0; // odd count 
        for (int i = 0 ; i < arr.size(); i++){
           if (arr[i]%2 != 0 ){
               odd ++;  
               
           }
           else { 
               even ++; // even ko plus krna hai
           }
            
        }
        return {odd , even};
    }
};
