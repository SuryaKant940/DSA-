class Solution {
public:
    int moreFrequent(vector<int>& arr, int x, int y) {
        int fx = 0, fy = 0;

        for(int n:arr){
            if(n==x)fx++;
            if(n==y)fy++;
        }

        if(fx>fy)
            return x;
        else if(fy>fx)
            return y;
        else
            return min(x,y);
    }
};