class Solution{
public:
    vector<vector<int>>matrixReshape(vector<vector<int>>&mat,int r,int c){
        int m=mat.size(),n=mat[0].size();
if(m*n!=r*c)return mat;
vector<vector<int>>ans(r,vector<int>(c));
int total=m*n;
for(int idx=0;idx<total;++idx){
ans[idx/c][idx%c]=mat[idx/n][idx%n];
}
return ans;
}
};