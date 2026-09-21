class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<int>v;
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>matrix1(r,vector<int>(c));
        int k=0;
        int l=0;

        if(m*n!=r*c){
            return mat;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
              matrix1[k][l]=mat[i][j];
              l++;
              if(l==c){
                l=0;
                k++;
              }
            }
        }
        return matrix1;
    }
};  