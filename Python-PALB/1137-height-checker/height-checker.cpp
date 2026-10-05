class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>v;
        int N=heights.size();
        int count=0;
        int k=0;
        v=heights;
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