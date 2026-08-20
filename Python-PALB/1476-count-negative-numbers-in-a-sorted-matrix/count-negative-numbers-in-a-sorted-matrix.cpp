class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int N=grid.size();
        int i=0;
        int count=0;
        int M=grid[0].size();
        int k=M-1;
        while(i<N && k>=0){
            if(grid[i][k]<0){
                count+=N-i;
                k--;
            }else if(grid[i][k]>0){
                i++;
            }else if(grid[i][k]==0){
                i++;
            }
        }
        return count;
    }
};