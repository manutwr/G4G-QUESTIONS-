class Solution {
  public:
  void reverse (vector <int > & arr, int i , int j ){
    // method to revese an array 
     while (i<j){  // checking jab tak j bada nahi ho jaata i se 
          swap (arr[i], arr [j]); // swap them 
          i++;
          j--;
      }
  }
// ow rotate an array 
    void rotate(vector<int> &arr) {
        int n = arr.size (); // size of n 
        reverse (arr, 0 , n-2); // reverse arr from 0 to n-2 kyku hame k last ka ement first position pe chahiy h 
        reverse ( arr , 0 , n-1);// jab woh aa rh jaye to pure array ko fir s seedha ka do 
        
    }
};
