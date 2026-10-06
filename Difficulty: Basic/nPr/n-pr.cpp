class Solution {
  public:
    long long nPr(int n, int r) {
        // code here
        long long ans=1;
        for(int i=0;i<r;i++){
            ans=ans*n;
            n=n-1;
        }
        return ans;
    }
};