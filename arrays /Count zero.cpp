class Solution {
  public:
    int countZeroes(vector<int> &arr) {
        // code here
        int n = arr.size();
        int start = 0;
        int end = n-1;
        int Fzero = -1;  // ek container 
        
        
        while (start <= end ){
            int mid = start + (end - start)/2; 
            
            if (arr[mid] == 0){
             Fzero = mid ; // containeer me value store kro
             end = mid -1 ;
             
            }
            else {
                start = mid +1;
            }
            
        
        }
        if (Fzero == -1) return 0; // agar container me kuch nahi aata to -1 return kro
        return n- Fzero; // nahi to array ke size s Fzero - krp
        
    }
};
