class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int m=image.size();
        int n=image[0].size();
        int j=0;
        int k=n-1;
        for(int i=0;i<m;i++){

            while(j<k){
                swap(image[i][j],image[i][k]);
                    j++;
                    k--;
            }
            j=0;
            k=n-1;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(image[i][j]==1){
                    image[i][j]=0;
                }else if(image[i][j]==0){
                    image[i][j]=1;
                }
            }
        }
        return image;
    }
};