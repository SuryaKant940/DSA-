class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>digit;
        while(n!=1){
            if(digit.find(n)!=digit.end())
            return false;
            digit.insert(n);
            int sum=0;
            while(n>0){
                int dig=n%10;
                sum+=dig*dig;
                n/=10;
            }
            n=sum;

        }
        return true;
    }
};