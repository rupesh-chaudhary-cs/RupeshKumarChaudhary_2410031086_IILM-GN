class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int M=accounts.size();
        int N=accounts[0].size();
        int count=0;
        int wealth=0;
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                count+=accounts[i][j];
            }
            if(count>wealth){
                wealth=count;
            }
            count=0;
        }
        return wealth;
    }
};