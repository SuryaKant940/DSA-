class Solution {
  public:
    int minValueToBalance(vector<int> &arr) {
        // code here
        int ans = 0;
        int mid = arr.size() / 2;
        for (int i = 0; i < mid; i++) {
            ans += arr[i] - arr[i + mid];
        }

        return std::abs(ans);
    }
};