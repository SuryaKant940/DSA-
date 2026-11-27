class Solution {
  public:
    int minMaxProduct(vector<int> &arr1, vector<int> &arr2) {
        // code here
        return (*(std::max_element(arr1.begin(), arr1.end())) * *(std::min_element(arr2.begin(), arr2.end())));
    }
};