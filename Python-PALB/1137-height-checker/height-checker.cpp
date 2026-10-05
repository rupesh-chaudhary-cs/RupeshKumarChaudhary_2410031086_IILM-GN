class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        int N=heights.size();
        int count=0;
        int k=0;
        for(int i=0;i<N;i++){
            v.push_back(heights[i]);
        }
        sort(v.begin(),v.end());
        for(int j=0;j<N;j++){
            if(heights[j]!=v[k]){
                count++;
            }
            k++;
        }
        return count;
    }
};