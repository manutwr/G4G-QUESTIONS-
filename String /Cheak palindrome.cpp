class Solution {
public:
    bool isPalindrome(string& s) {
        int left = 0;   // left ko zero maan ke aage badho
        int right = s.size() - 1; // right ki limit -1 hai

        while (left < right) { // loop jb tk chalao jb tk 
            if (s[left] != s[right]) { // agar left right ke eql nii hai toh false return maar do
                return false;
            }
            left++;
            right--;
        }

        return true;
    }
};
