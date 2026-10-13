class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        find(0, candidates, target, {}, ans);
        return ans;
    }

    void find(int index, vector<int>& arr, int target,
              vector<int> temp, vector<vector<int>>& ans) {
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        for (int i = index; i < arr.size(); i++) {
            if (i > index && arr[i] == arr[i - 1])
                continue;

            if (arr[i] > target)
                break;

            temp.push_back(arr[i]);
            find(i + 1, arr, target - arr[i], temp, ans);
            temp.pop_back();
        }
    }
};