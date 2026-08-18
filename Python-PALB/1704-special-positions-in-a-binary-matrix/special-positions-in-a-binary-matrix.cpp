class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       int m=mat.size();
       int n=mat[0].size();
       int count=0;
       int secondCount=0;
       for(int i=0;i<m;i++) {
         for(int j=0;j<n;j++){
            if (mat[i][j]==1){
                count++;
                for(int k=0;k<n;k++){
                    if(mat[i][k]==1){
                        count++;
                    }
                }
                for(int l=0;l<m;l++){
                    if(mat[l][j]==1){
                        count++;
                    }
                }
            }
            if(count==3){
                secondCount++;
            }
            count=0;
            
         }
        }
        return secondCount;

    }
};