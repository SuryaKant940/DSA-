class Solution {
  public:
    bool isSubset(vector<int> &a, vector<int> &b) {
        // code here
        int n=a.size();
        int m=b.size();
        unordered_map<int,int>s;
        for(int i=0;i<n;i++){
            s[a[i]]++;
        }
        for(int i=0;i<m;i++){
            s[b[i]]--;
        }
        for(int i=0;i<m;i++){
            if(s[b[i]]<0){
                return false;
            }
        }
        return true;
    }
};