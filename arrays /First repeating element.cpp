class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int, int> frequencyMap;

        
        for (int num : arr) {
            frequencyMap[num]++;
        }

        
        for (int i = 0; i < arr.size(); i++) {
            if (frequencyMap[arr[i]] > 1) {
                return i + 1; // Return 1-based index
            }
        }

        
        return -1;
    }
};
