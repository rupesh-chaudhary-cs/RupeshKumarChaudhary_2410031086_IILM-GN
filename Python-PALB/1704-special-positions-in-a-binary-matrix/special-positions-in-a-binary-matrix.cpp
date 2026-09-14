class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
       int result=0;
       int count=0;
       int count1=0;
       int m=mat.size();
       int n=mat[0].size();
       for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    for(int k=0;k<n;k++){
                        if(mat[i][k]==1){
                            count++;
                        }
                    }
                    if(count!=1){
                        count=0;
                        count1=0;
                        break;
                    }
                    for(int l=0;l<m;l++){
                        if(mat[l][j]==1){
                            count1++;
                        }
                    }
                    if(count1!=1){
                        count1=0;
                        count=0;
                        break;
                    }

                }
                if(count==1 && count1==1){
                    result++;
                }
                count=0;
                count1=0;
           }
       }
       return result;

    }
};