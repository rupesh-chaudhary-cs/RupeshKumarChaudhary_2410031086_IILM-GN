class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int m=img.size();
        int n=img[0].size();
        int sum=0;
        int count;
        vector<vector<int>>ans(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                int k=i;
                int l=j;
                for(int k=i-1;k<i+2;k++){
                    for(int l=j-1;l<j+2;l++){
                        if(k>=0 && l>=0 && k<m && l<n){
                            sum+=img[k][l];
                            count++;
                        }
                  
                    }
                }
                int avg=sum/count;
                ans[i][j]=avg;
                sum=0;
                count=0;
                
            }
        }
        return ans;
    }
};