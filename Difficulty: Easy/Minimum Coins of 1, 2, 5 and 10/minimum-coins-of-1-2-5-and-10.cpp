class Solution {
  public:
    int findMin(int n) {
        // code here
        int coin[]={10,5,2,1};
        int count=0;
        for(int i=0;i<4;i++){
            count+=n/coin[i];
            n=n%coin[i];
        }
        return count;
    }
};