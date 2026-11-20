class Solution {
public:
    double myPow(double x, int n) {
        long long p=n;
        long double ans = 1.0;
        long double a = x;
        if(p<0){
            a=1/a;
            p=-p;
        }
        
        while(p>0) {
            if(p%2==1)
            ans*=a;
            a*=a;
            p/=2;
        }
        return ans;
    }
};