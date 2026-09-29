class Solution {
  public:
    void reverseInGroups(vector<int> &arr, int k) {
        int n = arr.size();
        for(int i=0;i<n;i+=k){
            int s=i;
            int e=min(i+k-1,n-1);
            while(s<e){
                swap(arr[s++],arr[e--]);
            }
        }
    }
};