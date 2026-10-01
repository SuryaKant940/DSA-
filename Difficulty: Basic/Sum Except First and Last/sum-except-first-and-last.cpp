class Solution {
  public:
    int sumExceptFirstLast(vector<int>& arr) {
       int sum=0;
       int size=arr.size();
       if(size==1)
        return -arr[0];
       for(int i=1;i<size-1;i++)
       {
           sum+=arr[i];
       }
       return sum;
    }
};