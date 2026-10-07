class Solution {
  public:
    bool isProductEven(vector<int> &arr) {
        // code here
        for(int i:arr){
         if(i%2==0)
            {
            return true;
            }
         }
         return false;
    }
};