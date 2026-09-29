class Solution {
public:
    vector<int> getMoreAndLess(vector<int> &arr, int target) {
        int more = 0;
        int less = 0;

        for(int i = 0; i < arr.size(); i++) {
            if(arr[i] >= target)
                more++;

            if(arr[i] <= target)
                less++;
        }

        return {less, more};
    }
};