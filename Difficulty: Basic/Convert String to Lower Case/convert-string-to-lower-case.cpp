class Solution {
  public:
    string toLower(string& s) {
        // code here 

        string str="";
        for(auto x:s){
            str+=tolower(x);
        }return str;
    }
};

