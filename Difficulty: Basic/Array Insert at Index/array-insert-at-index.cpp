class Solution {
  public:
    void insertAtIndex(vector<int> &arr, int index, int val) {
        // code here
         int n=arr.size();
          arr.insert(arr.begin()+index,val);
    }
};
