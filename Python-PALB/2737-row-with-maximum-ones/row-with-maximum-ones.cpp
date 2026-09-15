class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int>v;
        int k;
        int m=mat.size();
        int n=mat[0].size();
        int max=INT_MIN;
        int count=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==1){
                    count++;
                }
            }
            if(count>max){
                max=count;
                k=i;
            }
            count=0;
        }
        v.push_back(k);
        v.push_back(max);
        return v;
    }
};