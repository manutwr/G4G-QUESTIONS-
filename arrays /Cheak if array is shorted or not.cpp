class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        for (int i=0 ; i<arr.size()-1 ; i++ ){ // loop chalaon 
            if (arr[i]> arr [i+1]){ // agar array i bada hai i+1 se to false return kar do
                return false ;
            }
            
        }
        return true; // nahi to true
    }// loopkhtm
};
