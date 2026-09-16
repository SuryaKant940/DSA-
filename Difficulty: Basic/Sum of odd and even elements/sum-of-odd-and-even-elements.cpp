
class Solution {
  public:
    vector<int> findSum(int n) {
        // Code here
        int oddsum=0,evensum=0;
        for(int i=0;i<=n;i++){
            if(i%2==0)
            evensum+=i;
            else
            oddsum+=i;
        }
        return {oddsum,evensum};
    }
};