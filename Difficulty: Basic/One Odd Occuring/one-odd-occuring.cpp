class Solution {
  public:
    int getOddOccurrence(vector<int>& arr) {
        // code here
        unordered_map<int,int>m;
        for(int i=0;i<arr.size();i++){
            m[arr[i]]++;
        }
        for(auto it:m){
            if(it.second%2==1){
                return it.first;
            }
        }
    }
};