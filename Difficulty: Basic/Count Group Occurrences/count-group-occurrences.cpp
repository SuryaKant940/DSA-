class Solution {
  public:
    int getCount(string s, int k) {
        // code here
        unordered_map<char,int>mp;
        mp[s[0]]=1;
        for(int i=1;i<s.size();i++){
            if(s[i]!=s[i-1]){
                mp[s[i]]++;
            }
        }
        int val=0;
        for(auto it:mp){
           if(it.second==k)
              val++;  
        }
        return val;
    }
};