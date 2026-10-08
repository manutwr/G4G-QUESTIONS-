class Solution {
  public:
    vector<int> mergeNsort(vector<int>& arr1, vector<int>& arr2) {
        // Step 1: Combine both vectors into a single result vector
        vector<int> res = arr1;
        res.insert(res.end(), arr2.begin(), arr2.end());

        // Step 2: Sort the merged vector in ascending order
        sort(res.begin(), res.end());

        // Step 3: Remove duplicate elements
        res.erase(unique(res.begin(), res.end()), res.end());

        return res;
    }
};
