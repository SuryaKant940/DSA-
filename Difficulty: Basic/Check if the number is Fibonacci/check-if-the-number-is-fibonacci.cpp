class Solution {
  public:
    bool isFibonacci(int n) {
        // code here
        if(n<=0){
          return false;
        } 
        int a=0,b=1;
        while(b<n){
            int c=a+b;
            a=b;
            b=c;
            }
            if(b==n){
            return true;
            }
            else
            {
             return false;
            }        
    }
};