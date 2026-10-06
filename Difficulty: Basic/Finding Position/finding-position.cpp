class Solution {
  public:
    long long int nthPosition(long long int n) {
        // code here
        int position=1;
        while (position*2<=n){
            position *= 2;
        }
        return position;
    }
};