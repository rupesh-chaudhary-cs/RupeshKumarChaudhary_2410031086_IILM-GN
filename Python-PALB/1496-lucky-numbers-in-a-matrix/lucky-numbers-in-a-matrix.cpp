class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size();
        int n=matrix[0].size();
        int min=INT_MAX;
        int max=INT_MIN;
        int i=0;
        int l;
        while(i<m){
          for(int j=0;j<n;j++){
            if(matrix[i][j]<min){
                min=matrix[i][j];
                l=j;
            }
          }
          for(int k=0;k<m;k++){
              if(matrix[k][l]>max){
                max=matrix[k][l];
              }
          }
          if(min==max){
            v.push_back(max);
          }
          min=INT_MAX;
          max=INT_MIN;
          i++;

        }
        return v;
    }
};