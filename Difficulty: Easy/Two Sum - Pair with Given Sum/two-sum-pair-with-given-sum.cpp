class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        unordered_map<int,bool>sum;
        for(int num:arr){
            if(sum[target-num]==true){
                return true;
            }
            sum[num]=true;
        }
        return false;
    }
};