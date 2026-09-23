class Solution {
public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(), arr.end());
        int i = 0, j = arr.size() - 1;
        while (i < j) {
            int sum = arr[i] + arr[j];
            if (sum == 0) {
                ans.push_back({arr[i], arr[j]});
                int a = arr[i], b = arr[j];
                while (i < j && arr[i] == a) i++;
                while (i < j && arr[j] == b) j--;
            }
            else if (sum < 0) i++;
            else j--;
        }
        return ans;
    }
};