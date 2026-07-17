class Solution {
  public:
    int firstSearch(vector<int> &arr, int k) {
        // code here
        int start = 0; // starting form 0
        int end  = arr.size()-1; // end fom index size-1
        int ans = -1;  // for storingg the value 
        while (start <=end ){ // jab tak start end k equal nah ho jaye 
            int mid= start+(end-start)/2;  // for mid calc
          
           if  (k== arr[mid]){  // agar mid k ke barabar h to 
                ans = mid ; // ans s -1 hat jayega aur mid ki value store ho jayegi 
                end = mid - 1; // end karna hai -1s3 
           }
           else  if (k>arr[mid]){  // agar k ada hai to right side search 
                start =mid + 1; // matlab starting mid =+1 se 
            }
            else {
                end = mid -1 ;  // agar k chhota hai to end = mid-1 ;
            }
            
            
        
 ;
    
            
        }      
        return ans; // agar kuch nii to ans ko return kar do ....... mtlb -1 ko return kr do
    }
};
