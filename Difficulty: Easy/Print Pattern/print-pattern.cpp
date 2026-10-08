class Solution {
  public:
    void generate(int curr, int N, vector<int>& res) {
        res.push_back(curr);
        if (curr > 0) {
            generate(curr - 5, N, res);
            if (curr <= N) {
                res.push_back(curr);
            }
        }
    }
    vector<int> pattern(int n) {
        if(n<0)return {n};
        vector<int> res;
        generate(n, n, res);
        return res;
    }
};

