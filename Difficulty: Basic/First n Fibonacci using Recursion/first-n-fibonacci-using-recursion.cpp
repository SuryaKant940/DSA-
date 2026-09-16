class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        // code here
        vector<int> result;
        if(n<=0){
            return result;
        }
        result.push_back(0);
        if(n==1){
            return result;
        }
        result.push_back(1);
        if(n==2){
            return result;
        }
        generateFib(n,result);
        return result;
    }
private:
    void generateFib(int n, vector<int>& result) {
        if (result.size() == n) {
            return;
        }

        int size = result.size();
        int nextFib = result[size - 1] + result[size - 2];

        result.push_back(nextFib);

        generateFib(n, result);
    }    
};