class Solution {
public:
    bool newFn(vector<vector<int>>& matrix, int target,int low,int high){
        int mid=(low+high)/2;
        int n=matrix[0].size();
        int row=mid/n;
        int column=mid%n;
        if(low>high){
            return false;
        }
        if(target==matrix[row][column]){
            return true;
        }else if(target>matrix[row][column]){
            return newFn(matrix,target,mid+1,high);
        }else if(target<matrix[row][column]){
            return newFn(matrix,target,low,mid-1);
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        int n=matrix[0].size();
        return newFn(matrix,target,0,m*n-1);


    }
};