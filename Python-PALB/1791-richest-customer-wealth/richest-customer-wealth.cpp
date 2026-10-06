class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max=0;
        int sum=0;
        int m=accounts.size();
        int n=accounts[0].size();
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                sum+=accounts[i][j];

            }
            if(sum>max){
                max=sum;
            }
            sum=0;
        }
        return max;
        
        
    }
};