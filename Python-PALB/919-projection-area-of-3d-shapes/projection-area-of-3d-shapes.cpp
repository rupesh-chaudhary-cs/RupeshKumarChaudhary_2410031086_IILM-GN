class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
       int m=grid.size() ;
       int n=grid[0].size();
       int frontView=0;
       int topView=0;
       int max=INT_MIN;
       int sideView=0;
       int maxColumn=INT_MIN;
       int totalProjection;
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]>0){
                frontView++;
            }
        }
       }
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]>max){
                max=grid[i][j];
            }
        }
        frontView+=max;
        max=INT_MIN;

       }
       for(int j=0;j<n;j++){
        for(int i=0;i<m;i++){
            if(grid[i][j]>maxColumn){
                maxColumn=grid[i][j];
            }
        }
        sideView+=maxColumn;
        maxColumn=0;
       }
       totalProjection=topView+frontView+sideView;
       return totalProjection;

    }
};