class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        for(int i=0;i<m;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[j][i],matrix[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            int k=0;
            int l=n-1;
            while(k<l){
                swap(matrix[i][k],matrix[i][l]);
                k++;
                l--;
            }
        }
    }
};