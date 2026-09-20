class Solution {
  public:
    int uniqueElement(vector<int>& arr, int k) {
        // code here
        unordered_map<int,int>mp;
        for(auto it:arr){
            mp[it]++;
        }
        for(auto it:mp){
            if(it.second==1){
                return it.first;
            }
        }
        return -1;
    }
};